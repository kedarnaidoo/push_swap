/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:33:43 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 09:58:05 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft/libft.h"
# define BUFF_SIZE 4096

typedef struct				s_fd
{
	int						fd;
	int						state;
	size_t					nbr_lines;
	t_list					*residual;
	struct s_fd				*next;
}							t_fd;

int							get_next_line(int const fd, char **line);
#endif
