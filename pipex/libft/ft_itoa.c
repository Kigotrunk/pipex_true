/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:17:13 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/18 19:11:01 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	len(long nb)
{
	int	x;

	x = 0;
	if (nb == 0)
	{
		x = 1;
		return (x);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		x++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		y;

	y = len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	s = (char *)malloc(sizeof(char) * (y + 1));
	if (!s)
		return (0);
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
	}
	s[y] = '\0';
	y--;
	while (n > 0)
	{
		s[y] = '0' + (n % 10);
		y--;
		n = n / 10;
	}
	return (s);
}
