/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:05:16 by josselin          #+#    #+#             */
/*   Updated: 2018/11/21 23:06:38 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if ((str = malloc(ft_strlen(s))) == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}
