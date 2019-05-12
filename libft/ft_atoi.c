/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josselin <josselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:16:33 by josselin          #+#    #+#             */
/*   Updated: 2018/11/21 20:30:21 by josselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int	rev;
	int	res;
	int	i;

	i = 0;
	rev = 1;
	res = 0;
	while ((nptr[i] < '0' || nptr[i] > '9') && nptr[i] != 0)
		i++;
	if (i > 0 && nptr[i] == '-')
		rev = -1;
	while (nptr[i] == '+' && nptr[i] == '-')
		i++;
	while (nptr[i] != 0 && nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10;
		res = res + nptr[i] - 48;
		i++;
	}
	res *= rev;
	return (res);
}
