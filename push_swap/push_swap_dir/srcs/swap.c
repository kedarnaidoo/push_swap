/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:12:12 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 06:51:27 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_sa(t_stack *s)
{
	long	tmp;

	if (s->top == 0 || s->top == 1)
		return ;
	tmp = s->num[0];
	s->num[0] = s->num[1];
	s->num[1] = tmp;
	ft_putendl("sa");
}

void	ft_sb(t_stack *s)
{
	long	tmp;

	if (s->top == 0 || s->top == 1)
		return ;
	tmp = s->num[0];
	s->num[0] = s->num[1];
	s->num[1] = tmp;
	ft_putendl("sb");
}

void	ft_ss(t_stack *sa, t_stack *sb)
{
	ft_sa(sa);
	ft_sb(sb);
}
