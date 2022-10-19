/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <ldiogo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:23:05 by ldiogo            #+#    #+#             */
/*   Updated: 2022/03/01 12:21:45 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((unsigned char *)str);
		str++;
	}
	return (0);
}

/*int main()
{
	char str[] = "gana dama";
	int c = 'd';
	size_t n = 10;

	printf("%s", ft_memchr(str, c, n));
}*/
