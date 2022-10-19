/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:33:45 by ldiogo            #+#    #+#             */
/*   Updated: 2022/02/22 12:57:49 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int str)
{
	if (str <= 90 && str >= 65)
		str += 32;
	return (str);
}
