/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:10:53 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/18 17:04:30 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	y;
	size_t	x;

	y = 0;
	x = 0;
	if ((int)len > ft_strlen((char *)s))
		ptr = (char *)malloc(sizeof(char) * ft_strlen((char *)s));
	else
		ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s[x])
	{
		if (x >= start && y < len)
		{
			ptr[y] = s[x];
			y++;
		}
		x++;
	}
	ptr[y] = '\0';
	return (ptr);
}
