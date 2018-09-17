/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:49:22 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/18 13:19:55 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t k;

	k = 0;
	while (k < len && src[k] != '\0')
	{
		dst[k] = src[k];
		k++;
	}
	while (k < len)
	{
		dst[k] = '\0';
		k++;
	}
	return (dst);
}
