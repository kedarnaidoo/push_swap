/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:30:10 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/11 11:18:23 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*dst;
	const size_t	k = ft_strlen(s1) + 1;

	dst = (char *)malloc(sizeof(char) * k);
	if (!dst)
	{
		return (NULL);
	}
	return (ft_memcpy(dst, s1, k));
}
