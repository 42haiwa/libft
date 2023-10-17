/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:12:21 by cjouenne          #+#    #+#             */
/*   Updated: 2023/10/17 12:16:37 by cjouenne         ###   ########.fr       */
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
	if (!dest && !src && n > 0)
		return (NULL);
	if (dest > src && dest < src + n)
	{
		i = n;
		while (i-- > 0)
			cd[i] = cs[i];
	}
	else
	{
		i = -1;
		while (++i < n)
			cd[i] = cs[i];
	}
	return (dest);
}
