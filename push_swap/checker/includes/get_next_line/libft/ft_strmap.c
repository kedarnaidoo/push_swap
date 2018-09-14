/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:54:21 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/07 15:45:42 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	int		k;
	char	*res;

	if (!s)
		return (0);
	k = 0;
	len = ft_strlen(s);
	if ((res = ft_strnew(len)) == NULL)
		return (0);
	while (s[k])
	{
		res[k] = f(s[k]);
		k++;
	}
	return (res);
}
