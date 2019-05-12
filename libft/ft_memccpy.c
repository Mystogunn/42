/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:06:34 by josselin          #+#    #+#             */
/*   Updated: 2018/11/22 17:57:36 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*dst;
	char		*sourc;

	i = 0;
	dst = dest;
	sourc = (char *)src;
	while (i < n && (i == 0 || sourc[i - 1] != c))
	{
		dst[i] = sourc[i];
		i++;
	}
	if (i > 0 && sourc[i - 1] == c)
		return (dst + i);
	else
		return (NULL);
}
