/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:48:23 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/30 14:53:42 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_linelength(t_fd *current, t_list *end, void *end_of_line)
{
	t_list	*to_del;
	size_t	length;

	to_del = current->residual;
	current->residual = ft_lstnew((void *)((char*)end_of_line + 1),
	end->content_size - (size_t)((char*)end_of_line - (char*)end->content) - 1);
	current->state =
	current->state - (int)((char*)end_of_line - (char*)end->content) - 1;
	length = (size_t)((char*)end_of_line - (char*)end->content);
	while (to_del != end)
	{
		length = length + to_del->content_size;
		to_del = to_del->next;
	}
	return (length);
}

static int		ft_extract(t_fd *current, t_list *end,
		char **line, void *end_of_line)
{
	t_list	*to_del;
	t_list	*temp;
	size_t	length;
	size_t	k;

	if ((k = 0) || current->state <= 0 || !end_of_line)
		return (0);
	to_del = current->residual;
	length = ft_linelength(current, end, end_of_line);
	if (!(current->residual) || !(*line = ft_strnew(length + 1)))
	{
		return (-1);
	}
	while ((temp = to_del))
	{
		ft_memccpy(*line + k, to_del->content, '\n', to_del->content_size);
		k = k + to_del->content_size;
		to_del = to_del->next;
		free(temp->content);
		free(temp);
	}
	(*line)[length] = ((*line)[length] == '\n') ? 0 : (*line)[length];
	current->nbr_lines += 1;
	return (1);
}

static int		ft_read(t_fd *current, char **line, void *buff)
{
	t_list	*running;
	int		extract;

	running = current->residual;
	while ((extract = (int)read(current->fd, buff, BUFF_SIZE)) > 0)
	{
		current->state = extract;
		if (!(running->next = ft_lstnew(buff, (size_t)current->state)))
		{
			return (-1);
		}
		running = running->next;
		if ((extract = ft_extract(current, running, line,
			ft_memchr(running->content, '\n', running->content_size))))
			return (extract);
	}
	current->state = (extract) ? extract : current->state;
	if (current->state == -1)
	{
		return (-1);
	}
	return (ft_extract(current, running, line,
				(void *)((char*)running->content + running->content_size - 1)));
}

static t_fd		*ft_dispatch(int const fd, t_fd **fd_list)
{
	t_fd	*new;
	t_fd	*cpy;

	cpy = *fd_list;
	if (cpy)
	{
		while (cpy->next && cpy->fd != fd)
			cpy = cpy->next;
		if (cpy->fd == fd)
			return (cpy);
	}
	if (!(new = (t_fd *)malloc(sizeof(t_fd) * 1)))
		return (NULL);
	if (*fd_list)
		cpy->next = new;
	else
		*fd_list = new;
	new->fd = fd;
	new->state = 0;
	new->next = NULL;
	new->nbr_lines = 0;
	if (!(new->residual = ft_lstnew(NULL, 0)))
		return (NULL);
	return (new);
}

int				get_next_line(int const fd, char **line)
{
	static t_fd	*fd_list = NULL;
	t_fd		*current;
	int			res;
	void		*buff;

	if (fd < 0 || !line || !(current = ft_dispatch(fd, &fd_list)))
	{
		return (-1);
	}
	*line = NULL;
	if ((res = ft_extract(current, current->residual, line, ft_memchr(current
->residual->content, '\n', current->residual->content_size)) != 0))
		return (res);
	if (!(buff = ft_memalloc(BUFF_SIZE)))
	{
		return (-1);
	}
	res = ft_read(current, line, buff);
	ft_memdel(&buff);
	return (res);
}
