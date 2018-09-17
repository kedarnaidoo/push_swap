/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:15:57 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/07 15:44:51 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*tmp;
	char	*tmp_og;

	size++;
	tmp = (char*)malloc(sizeof(char) * size);
	if (!tmp)
		return (NULL);
	tmp_og = tmp;
	while (size--)
		*tmp++ = 0;
	return (tmp_og);
}
