/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:03:36 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/07 15:51:25 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	int		k;
	char	*res;

	if (!s)
		return (0);
	len = ft_strlen(s);
	k = 0;
	if ((res = ft_strnew(len)) == NULL)
		return (0);
	while (s[k])
	{
		res[k] = f(k, s[k]);
		k++;
	}
	return (res);
}
