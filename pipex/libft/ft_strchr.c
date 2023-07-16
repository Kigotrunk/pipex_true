/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:25:50 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/16 14:28:01 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int		x;
	char	cc;

	cc = (char)c;
	x = 0;
	while (src[x])
	{
		if (src[x] == cc)
			return ((char *)&src[x]);
		x++;
	}
	if (src[x] == cc)
		return ((char *)&src[x]);
	return (0);
}
