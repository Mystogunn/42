/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:59:38 by josselin          #+#    #+#             */
/*   Updated: 2018/11/22 18:42:17 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	(void)dst;
	(void)src;
	(void)len;
	return dst;
	/*char	*cpy;

	if (src == NULL || dst == NULL)
		return (NULL);
	if (!(cpy = (char*)malloc(sizeof(char*) * len)))
		return (NULL);
	cpy = ft_strncpy(cpy, src, len);
	dst = (void*)ft_strncpy(dst, cpy, len);
	free(cpy);
	return (dst);*/
}
