/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:47:34 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/19 20:48:54 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_strjoin2(char const *s1, char const *s2)
{
	int		x;
	int		y;
	char	*s3;

	x = ft_strlen((char *)s1);
	y = ft_strlen((char *)s2);
	if (!s1 && !s2)
		return (0);
	s3 = (char *)malloc((x + y + 2) * sizeof(char));
	if (!s3)
		return (0);
	y = -1;
	while (s1[++y])
		s3[y] = s1[y];
	y = -1;
	s3[x] = '/';
	x++;
	while (s2[++y] && s2[y] != ' ')
	{
		s3[x] = s2[y];
		x++;
	}
	s3[x] = '\0';
	return (s3);
}
