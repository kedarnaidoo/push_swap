/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:10:19 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/07 15:46:46 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	if (s1 == 0 || s2 == 0)
		return (0);
	while ((*s1 || *s2) && len > 0)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		len--;
	}
	return (1);
}