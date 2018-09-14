/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 08:54:32 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/11 09:36:48 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dststr;
	const char	*srcstr;

	i = 0;
	dststr = (char *)dst;
	srcstr = (const char *)src;
	if (n == 0 || dststr == srcstr)
		return (dst);
	while (i < n)
	{
		dststr[i] = (char)srcstr[i];
		i++;
	}
	return (dst);
}
