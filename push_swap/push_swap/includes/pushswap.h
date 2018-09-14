/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:11:00 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 14:31:07 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "../../libft/libft.h"
# define BUFF_SIZE 4096

typedef struct	s_stack
{
	long		*num;
	long		top;
}				t_stack;

void			ft_ra(t_stack *sa);
void			ft_rra(t_stack *sa);
void			ft_rb(t_stack *sa);
void			ft_rrb(t_stack *sa);

void			ft_rrr(t_stack *sa, t_stack *sb);
void			ft_rr(t_stack *sa, t_stack *sb);

void			ft_sa(t_stack *s);
void			ft_sb(t_stack *s);
void			ft_ss(t_stack *sa, t_stack *sb);

void			ft_pa(t_stack *sa, t_stack *sb);
void			ft_pb(t_stack *sa, t_stack *sb);
void			ft_splitstack(t_stack *sa);

void			ft_check(t_stack *sa);
int				ft_error(int argc, char **argv);
int				ft_duplicates(t_stack sa);
int				ft_addnum(t_stack *sa, char *num);
t_stack			ft_init(int argc, char**argv);
#endif
