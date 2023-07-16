/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:09:01 by kortolan          #+#    #+#             */
/*   Updated: 2023/03/19 11:11:53 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	int		z;
	char	*s3;

	x = ft_strlen((char *)s1);
	y = ft_strlen((char *)s2);
	if (!s1 && !s2)
		return (0);
	s3 = (char *)malloc((x + y + 1) * sizeof(char));
	if (!s3)
		return (0);
	z = -1;
	while (s1[++z])
		s3[z] = s1[z];
	z = -1;
	while (s2[++z])
	{
		s3[x] = s2[z];
		x++;
	}
	s3[x] = '\0';
	return (s3);
}
