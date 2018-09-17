/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotboth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:09:42 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/17 16:51:20 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap_dir/includes/pushswap.h"

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
