/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:09:10 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/18 18:27:44 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	x;
	char			*dest2;
	const char		*src2;
	unsigned int	y;

	if (!dest && !src)
		return (NULL);
	dest2 = dest;
	src2 = src;
	x = 0;
	y = 0;
	while (x < n)
	{
		dest2[x] = src2[x];
		x++;
	}
	return ((void *)dest);
}
