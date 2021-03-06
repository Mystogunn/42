/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 00:07:27 by josselin          #+#    #+#             */
/*   Updated: 2018/11/22 18:41:18 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblank_custom(int c)
{
	return ((c == ' ' || c == '\t' || c == '\n') ? 1 : 0);
}

char		*ft_strtrim(char const *s)
{
	char	*fresh;
	int		index_end;
	size_t	i;

	if (!s)
		return (NULL);
	index_end = 0;
	i = 0;
	fresh = ft_strnew(ft_strlen(s));
	while (i < ft_strlen(s))
	{
		if (!index_end && ft_isblank_custom(s[i]))
			i++;
		else
			fresh[index_end++] = s[i++];
	}
	while (ft_isblank_custom(fresh[--index_end]))
		fresh[index_end] = '\0';
	return (fresh);
}
