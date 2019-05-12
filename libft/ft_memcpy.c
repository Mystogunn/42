/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 21:53:50 by josselin          #+#    #+#             */
/*   Updated: 2018/11/22 17:48:36 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst;
	const char		*sourc;

	if (src == NULL || dest == NULL)
		return (NULL);
	dst = dest;
	sourc = src;
	i = 0;
	while (i < n)
	{
		dst[i] = sourc[i];
		i++;
	}
	return (dest);
}
