/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:28:55 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/18 18:32:06 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!*s2)
		return ((char *)s1);
	if (n == 0)
		return (NULL);
	while (s1[x])
	{
		y = 0;
		while (s1[x] == s2[y] && s1[x] && x < n)
		{
			x++;
			y++;
		}
		if (!s2[y])
			return ((char *)&s1[x - y]);
		x = (x - y) + 1;
	}
	return (0);
}
