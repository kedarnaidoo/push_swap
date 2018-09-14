/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:51:27 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/18 09:35:06 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcstr;
	char	*dststr;

	srcstr = (char *)src;
	dststr = (char *)dst;
	if (srcstr < dststr)
	{
		while (len--)
			dststr[len] = srcstr[len];
	}
	else
		ft_memcpy(dststr, srcstr, len);
	return (dststr);
}
