/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:13:05 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/12 07:47:08 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	size_t	k;
	size_t	sizen;
	char	*str;

	k = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sizen = ft_nbrlen(n);
	if (!(str = (char *)malloc(sizeof(char) * (sizen + 1))))
		return (NULL);
	str[sizen] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		k = k + 1;
	}
	while (k < sizen--)
	{
		str[sizen] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
