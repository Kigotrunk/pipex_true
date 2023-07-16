/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:20:51 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/26 15:50:19 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(char const *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	char	*start;
	char	*end;
	int		i;

	end = (char *)s1 + ft_strlen((char *)s1) - 1;
	while (isinset(set, *end) && end > s1)
		end--;
	start = (char *)s1;
	while (isinset(set, *start) && *(start + 1))
		start++;
	if (start > end || ft_strlen((char *)s1) == 0)
	{
		s2 = (char *)malloc(1);
		*s2 = '\0';
		return (s2);
	}
	s2 = (char *)malloc(end - start + 2);
	if (!s2)
		return (NULL);
	i = -1;
	while (start + i++ <= end)
		s2[i] = start[i];
	s2[i - 1] = '\0';
	return (s2);
}

static int	isinset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
