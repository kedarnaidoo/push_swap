/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:08:29 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 10:01:50 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../../libft/libft.h"
# include "get_next_line/get_next_line.h"
# include "../../push_swap/includes/pushswap.h"

void			ft_ra(t_stack *sa);
void			ft_rra(t_stack *sa);
void			ft_rb(t_stack *sb);
void			ft_rrb(t_stack *sb);

void			ft_rrr(t_stack *sa, t_stack *sb);
void			ft_rr(t_stack *sa, t_stack *sb);

void			ft_sa(t_stack *s);
void			ft_sb(t_stack *s);
void			ft_ss(t_stack *sa, t_stack *sb);

void			ft_pa(t_stack *sa, t_stack *sb);
void			ft_pb(t_stack *sa, t_stack *sb);

int				ft_error(int argc, char **argv);
int				ft_duplicates(t_stack sa);
int				ft_addnum(t_stack *sa, char *num);
t_stack			ft_init(int argc, char**argv);

#endif
