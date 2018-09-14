/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:11:28 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 13:47:47 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_pa(t_stack *sa, t_stack *sb)
{
	int i;

	if (sa->top == 0)
		return ;
	i = sb->top - 1;
	while (i >= 0)
	{
		sb->num[i + 1] = sb->num[i];
		i--;
	}
	sb->num[0] = sa->num[0];
	sb->top++;
	while (i < sa->top)
	{
		sa->num[i] = sa->num[i + 1];
		i++;
	}
	sa->top--;
	ft_putendl("pa");
}

void	ft_pb(t_stack *sa, t_stack *sb)
{
	int	i;

	if (sa->top == 0)
		return ;
	i = sb->top - 1;
	while (i >= 0)
	{
		sb->num[i + 1] = sb->num[i];
		i--;
	}
	sb->num[0] = sa->num[0];
	sb->top++;
	while (i < sa->top)
	{
		sa->num[i] = sa->num[i + 1];
		i++;
	}
	sa->top--;
	ft_putendl("pb");
}
