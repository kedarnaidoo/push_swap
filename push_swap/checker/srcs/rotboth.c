/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotboth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:09:42 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/14 06:37:07 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap/includes/pushswap.h"

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
