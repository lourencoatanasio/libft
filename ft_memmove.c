/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <ldiogo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:36:55 by ldiogo            #+#    #+#             */
/*   Updated: 2022/03/16 18:19:20 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	char			*lasts;
	char			*lastd;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		lasts = (char *)s + (len - 1);
		lastd = (char *)d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
/*
int main()
{
	char dest[] = "nao sei nada de nada";
	char src[] = "nao sei nada";
	size_t len = 20;

	printf("%s", ft_memmove(dest, dest + 1, len));
}*/
