/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 08:45:14 by knaidoo           #+#    #+#             */
/*   Updated: 2018/06/11 09:07:51 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			bytes;
	unsigned char	*temp;

	bytes = 0;
	temp = (unsigned char *)b;
	while (bytes < len)
	{
		temp[bytes] = (unsigned char)c;
		bytes++;
	}
	return (b);
}
