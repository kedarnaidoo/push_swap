/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:09:27 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/17 16:51:07 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap_dir/includes/pushswap.h"

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
}
