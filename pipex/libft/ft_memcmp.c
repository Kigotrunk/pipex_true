/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:52:51 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/15 19:59:47 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*src;
	unsigned char	*dst;

	x = 0;
	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*src == *dst && ++x < n)
	{
		src++;
		dst++;
	}
	return ((int)*src - *dst);
}
