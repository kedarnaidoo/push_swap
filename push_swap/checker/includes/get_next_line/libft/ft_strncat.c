/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:58:43 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/18 13:51:14 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	k;

	len = ft_strlen(s1);
	k = 0;
	while (s2[k] && k < n)
	{
		s1[len] = s2[k];
		k++;
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
