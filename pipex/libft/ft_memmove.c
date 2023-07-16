/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:46:36 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/18 18:33:36 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;
	char	*s;
	char	*dst;

	if (!dest && !src)
		return (NULL);
	s = (char *)src;
	dst = (char *)dest;
	x = 0;
	if (dst > s)
	{
		while (n-- > 0)
		{
			dst[n] = s[n];
		}
	}
	else
	{
		while (x < n)
		{
			dst[x] = s[x];
			x++;
		}
	}
	return (dest);
}
