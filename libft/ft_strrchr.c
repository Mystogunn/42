/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:08:18 by josselin          #+#    #+#             */
/*   Updated: 2018/11/22 18:08:33 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	i = 0;
	t = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			t = ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		t = ((char *)&s[i]);
	return (t);
}
