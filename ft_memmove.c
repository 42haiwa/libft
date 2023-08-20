/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:12:21 by cjouenne          #+#    #+#             */
/*   Updated: 2023/08/02 22:05:51 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cd;
	unsigned char	*cs;

	cd = (unsigned char *) dest;
	cs = (unsigned char *) src;
	if (dest > src && dest < src + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			cd[i] = cs[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			cd[i] = cs[i];
			i++;
		}
	}
	return (dest);
}
