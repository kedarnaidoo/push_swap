/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:47:28 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/07 15:50:03 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	og;
	size_t	len;

	og = size + ft_strlen(src);
	len = 0;
	while (*dst && size > 0)
	{
		dst++;
		size--;
		len++;
	}
	if (size < 1)
		return (og);
	while (*src && --size > 0)
	{
		*dst++ = *src++;
		len++;
	}
	while (*src++)
		len++;
	*dst = '\0';
	return (len);
}
