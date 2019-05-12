/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:36:19 by josselin          #+#    #+#             */
/*   Updated: 2018/11/22 18:39:41 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		if (str2[i] == '\0')
			return (1);
		if (str1[i] != str2[i])
			return ((str1[i] > str2[i]) ? 1 : -1);
		i++;
	}
	if (str2[i] != '\0' && i != n)
		return (-1);
	return (0);
}
