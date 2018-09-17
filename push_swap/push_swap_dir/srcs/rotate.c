/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:11:39 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 09:43:14 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_rra(t_stack *sa)
{
	int		i;
	long	tmp;

	i = sa->top - 1;
	tmp = sa->num[i];
	while (i >= 0)
	{
		sa->num[i] = sa->num[i - 1];
		i--;
		sa->num[i] = tmp;
	}
	sa->num[0] = tmp;
	ft_putendl("rra");
}

void	ft_rrb(t_stack *sa)
{
	int		i;
	long	tmp;

	i = sa->top - 1;
	tmp = sa->num[i];
	while (i >= 0)
	{
		sa->num[i] = sa->num[i - 1];
		i--;
		sa->num[i] = tmp;
	}
	sa->num[0] = tmp;
	ft_putendl("rrb");
}

void	ft_ra(t_stack *sa)
{
	int		i;
	long	tmp;

	i = 0;
	tmp = sa->num[0];
	while (i < sa->top - 1)
	{
		sa->num[i] = sa->num[i + 1];
		i++;
		sa->num[i] = tmp;
	}
	ft_putendl("ra");
}

void	ft_rb(t_stack *sa)
{
	int		i;
	long	tmp;

	i = 0;
	while (i < sa->top - 1)
	{
		tmp = sa->num[i + 1];
		sa->num[i + 1] = sa->num[i];
		sa->num[i] = tmp;
		i++;
	}
	ft_putendl("rb");
}
