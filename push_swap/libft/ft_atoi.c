/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:33:59 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/17 17:13:40 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
long	ft_atoi(const char *str)
{
	long	k;
	long	n;

	k = 0;
	n = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
		n = -1;
	else
		n = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		k = (k * 10) + (*str++ - '0');
	return (k * n);
} */

long atol(const char* str)
{
	long val = 0;
	bool neg = false;

	while((*str >= '\t' && *str <= '\r') || *str == 32
		str++;
	switch(*str)
	{
		case '-':
			neg = true;
		// intentional fallthrough
		case '+':
			str++;
	}
	while(isdigit(*str))
	{
		val = (10 * val) + (*str++ - '0');
	}
	return neg ? -val : val;
}
