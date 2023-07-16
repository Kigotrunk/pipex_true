/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:19:43 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/16 14:37:25 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int		x;
	char	cc;

	x = ft_strlen((char *)src);
	cc = (char)c;
	while (x > 0)
	{
		if (src[x] == cc)
			return ((char *)src + x);
		x--;
	}
	if (src[x] == cc)
		return ((char *)src + x);
	return (0);
}
