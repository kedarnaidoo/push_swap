/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:12:03 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/17 16:22:12 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void		ft_order(t_stack sa, t_stack sb)
{
	int i;
	int tmp;

	i = 1;
	if (sb.top != 0)
		return ;
	tmp = sa.num[0];
	while (i < sa.top)
	{
		if (sa.num[i] < tmp)
			return ;
		tmp = sa.num[i];
		i++;
	}
	exit(0);
}

long	ft_low(t_stack sa)
{
	long	small;
	int		j;

	small = sa.num[0];
	j = 0;
	while (j < sa.top)
	{
		if (sa.num[j] < small)
			small = sa.num[j];
		j++;
	}
	return (small);
}

void	ft_sort(t_stack *sa, t_stack sb)
{
	if (ft_low(*sa) == sa->num[0] && sa->num[1] > sa->num[2])
	{
		ft_ra(sa);
		ft_sa(sa);
		ft_rra(sa);
	}
	else if (ft_low(*sa) == sa->num[1] && sa->num[0] < sa->num[2])
	{
		ft_rra(sa);
		ft_sa(sa);
		ft_rra(sa);
	}
	else if (ft_low(*sa) == sa->num[1] && sa->num[0] > sa->num[2])
		ft_ra(sa);
	else if (ft_low(*sa) == sa->num[2] && sa->num[0] < sa->num[1])
		ft_rra(sa);
	else if (ft_low(*sa) == sa->num[2] && sa->num[0] > sa->num[1])
	{
		ft_sa(sa);
		ft_rra(sa);
	}
	while (sb.top > 0)
		ft_pa(&sb, sa);
}

void	ft_splitstack(t_stack *sa)
{
	t_stack	sb;
	long	low;

	sb.top = 0;
	sb.num = (long *)malloc(BUFF_SIZE);
	while (sa->top > 3)
	{
		ft_order(*sa, sb);
		low = ft_low(*sa);
		if (low == sa->num[1])
			ft_sa(sa);
		else if (low < sa->top / 2)
		{
			while (sa->num[0] != low)
				ft_rra(sa);
		}
		else
		{
			while (sa->num[0] != low)
				ft_ra(sa);
		}
		ft_pb(sa, &sb);
	}
	ft_sort(sa, sb);
	free((void*)sb.num);
	free((void*)sa->num);
}
