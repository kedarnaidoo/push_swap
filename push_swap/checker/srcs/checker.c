/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:08:58 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 14:51:33 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int		ft_addnum(t_stack *sa, char *num)
{
	int i;

	i = 0;
	while (num[i] != ' ' && num[i])
		i++;
	sa->num[sa->top++] = ft_atoi(num);
	return (i);
}

void	ft_checker(t_stack sa, t_stack sb)
{
	int	i;
	int	tmp;

	i = 1;
	if (sb.top != 0)
	{
		ft_putendl("Error");
		return ;
	}
	tmp = sa.num[0];
	while (i < sa.top)
	{
		if (sa.num[i] < tmp)
		{
			ft_putendl("Error");
			return ;
		}
		tmp = sa.num[i];
		i++;
	}
	ft_putendl("Error");
}

int		ft_op(t_stack *sa, t_stack *sb, char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		ft_sa(sa);
	else if (ft_strcmp(str, "sb") == 0)
		ft_sb(sb);
	else if (ft_strcmp(str, "ss") == 0)
		ft_ss(sa, sb);
	else if (ft_strcmp(str, "pa") == 0)
		ft_pa(sb, sa);
	else if (ft_strcmp(str, "pb") == 0)
		ft_pb(sa, sb);
	else if (ft_strcmp(str, "ra") == 0)
		ft_ra(sa);
	else if (ft_strcmp(str, "rb") == 0)
		ft_rb(sb);
	else if (ft_strcmp(str, "rr") == 0)
		ft_rr(sa, sb);
	else if (ft_strcmp(str, "rra") == 0)
		ft_rra(sa);
	else if (ft_strcmp(str, "rrb") == 0)
		ft_rrb(sb);
	else if (ft_strcmp(str, "rrr") == 0)
		ft_rrr(sa, sb);
	else
		return (1);
	return (0);
}

void	ft_getop(t_stack sa)
{
	char	*line;
	int		ret;
	t_stack	sb;

	sb.top = 0;
	sb.num = (long*)malloc(BUFF_SIZE);
	ret = 1;
	line = NULL;
	while (ret)
	{
		ret = get_next_line(0, &line);
		if (!ret)
			break ;
		if (ft_op(&sa, &sb, line))
		{
			ft_putstr_fd("ERROR\n", 2);
			exit(0);
		}
		free(line);
	}
	ft_checker(sa, sb);
	free((void*)sa.num);
	free((void*)sb.num);
}

int		main(int argc, char **argv)
{
	t_stack sa;

	if (ft_error(argc, argv))
		return (0);
	sa = ft_init(argc, argv);
	if (sa.top == 0)
		return (0);
	if (ft_duplicates(sa))
		return (0);
	ft_getop(sa);
	return (0);
}
