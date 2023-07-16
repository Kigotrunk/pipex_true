/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:31:33 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/15 18:05:12 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int d, size_t n)
{
	unsigned char	*ptr;

	ptr = dest;
	while (n-- > 0)
		*ptr++ = d;
	return (dest);
}
