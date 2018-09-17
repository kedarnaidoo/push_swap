/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:24:42 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/18 13:36:53 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	k;

	k = 0;
	while (((unsigned char)s1[k] != '\0' || (unsigned char)s2[k] != '\0')
			&& (unsigned char)s1[k] == (unsigned char)s2[k])
	{
		k++;
	}
	return ((unsigned char)s1[k] - (unsigned char)s2[k]);
}
