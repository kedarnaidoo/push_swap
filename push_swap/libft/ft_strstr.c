/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:24:56 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/06 16:27:12 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int			len;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		len = 0;
		while (*haystack == *needle)
		{
			needle++;
			haystack++;
			len++;
			if (!*needle)
				return ((char *)(haystack - len));
		}
		haystack = haystack - len;
		needle = needle - len;
		haystack++;
	}
	return (NULL);
}
