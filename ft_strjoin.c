/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <ldiogo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:09:35 by ldiogo            #+#    #+#             */
/*   Updated: 2022/03/07 14:43:00 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*str;

	if (!s1 || !s2)
		return (0);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = (char *)malloc((sizeof(char) + size1 + size2));
	if (!str)
	{
		return (0);
	}
	ft_memcpy(str, s1, size1);
	ft_memcpy(str + size1, s2, size2);
	str[size1 + size2] = '\0';
	return (str);
}
