/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotboth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:11:52 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 06:42:16 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_rrr(t_stack *sa, t_stack *sb)
{
	ft_rra(sa);
	ft_rrb(sb);
}

void	ft_rr(t_stack *sa, t_stack *sb)
{
	ft_ra(sa);
	ft_rb(sb);
}
