/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:08:33 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/16 14:45:13 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		x;
	char	*ptr;
	int		y;

	x = 0;
	y = 0;
	while (s[x])
	{
		x++;
	}
	ptr = (char *)malloc((x + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (y < x)
	{
		ptr[y] = s[y];
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}
