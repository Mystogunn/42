/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:44:30 by josselin          #+#    #+#             */
/*   Updated: 2018/11/21 21:51:21 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	if ((str = malloc(size)) == NULL)
		return (NULL);
	while (size)
	{
		str[size] = 0;
		size--;
	}
	return (str);
}
