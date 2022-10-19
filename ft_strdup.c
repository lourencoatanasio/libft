/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <ldiogo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:50:15 by ldiogo            #+#    #+#             */
/*   Updated: 2022/02/26 13:23:42 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	void	*dest;

	dest = malloc(ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	return ((char *) ft_memcpy(dest, str, ft_strlen(str) + 1));
}
