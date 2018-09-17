/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:10:07 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/17 16:50:42 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap_dir/includes/pushswap.h"

void	ft_sa(t_stack *s)
{
	long	tmp;

	if (s->top == 0 || s->top == 1)
		return ;
	tmp = s->num[0];
	s->num[0] = s->num[1];
	s->num[1] = tmp;
}

void	ft_sb(t_stack *s)
{
	long	tmp;

	if (s->top == 0 || s->top == 1)
		return ;
	tmp = s->num[0];
	s->num[0] = s->num[1];
	s->num[1] = tmp;
}

void	ft_ss(t_stack *sa, t_stack *sb)
{
	ft_sa(sa);
	ft_sb(sb);
}
