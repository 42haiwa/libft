/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:10:58 by cjouenne          #+#    #+#             */
/*   Updated: 2023/10/17 12:10:37 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cd;
	unsigned char	*cs;

	if (!dest && !src && n > 0)
		return (NULL);
	i = 0;
	cd = (unsigned char *) dest;
	cs = (unsigned char *) src;
	while (i < n)
	{
		cd[i] = cs[i];
		i++;
	}
	return (dest);
}
