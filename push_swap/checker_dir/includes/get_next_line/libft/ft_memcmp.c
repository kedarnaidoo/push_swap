/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:03:28 by knaidoo           #+#    #+#             */
/*   Updated: 2018/05/25 10:34:09 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t k;

	k = 0;
	while (k < n)
	{
		if (((unsigned char *)s1)[k] != ((unsigned char *)s2)[k])
			return (((unsigned char *)s1)[k] - ((unsigned char *)s2)[k]);
		k++;
	}
	return (0);
}
