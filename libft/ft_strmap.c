/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:24:04 by josselin          #+#    #+#             */
/*   Updated: 2018/11/21 22:57:21 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if ((str = malloc(ft_strlen(s))) == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = (f)(s[i]);
		i++;
	}
	return (str);
}
