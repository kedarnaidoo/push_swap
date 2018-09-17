/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:18:07 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/28 11:48:23 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int			k;
	const char	*limit;

	limit = h + len;
	if (!*n)
		return ((char*)h);
	while (*h && h < limit)
	{
		k = 0;
		while (*h == *n && h < limit)
		{
			n++;
			h++;
			k++;
			if (!*n)
				return ((char *)(h - k));
		}
		h = h - k;
		n = n - k;
		h++;
	}
	return (NULL);
}
