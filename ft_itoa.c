/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <ldiogo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:27:00 by ldiogo            #+#    #+#             */
/*   Updated: 2022/03/07 14:30:39 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	newstrlen(long c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	else if (c < 0)
	{
		c *= -1;
		i++;
	}
	while (c > 0)
	{
		c /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int c)
{
	char	*res;
	int		i;
	long	numb;

	numb = c;
	i = newstrlen(numb);
	res = (char *)malloc(sizeof(char) * i + 1);
	if (!res)
		return (NULL);
	if (numb < 0)
	{
		res[0] = '-';
		numb *= -1;
	}
	else if (numb == 0)
		res[0] = '0';
	res[i] = '\0';
	while (numb > 0)
	{
		res[i - 1] = numb % 10 + '0';
		numb /= 10;
		i--;
	}
	return (res);
}
