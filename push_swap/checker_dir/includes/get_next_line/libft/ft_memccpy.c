/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:19:59 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/11 11:26:40 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*ptr;
	size_t		k;

	k = 0;
	ptr = dst;
	while (k < n)
	{
		ptr[k] = ((unsigned char *)src)[k];
		if (((unsigned char *)src)[k] == (unsigned char)c)
			return (dst + (k + 1));
		k++;
	}
	return (NULL);
}
