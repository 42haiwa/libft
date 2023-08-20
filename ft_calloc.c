/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:01:08 by cjouenne          #+#    #+#             */
/*   Updated: 2023/08/04 12:19:13 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;
	size_t	s_max;

	s_max = 0xFFFFFFFFFFFFFFFF;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > s_max / size)
		return (NULL);
	buf = malloc(nmemb * size);
	if (!buf)
		return (NULL);
	ft_bzero((unsigned char *) buf, nmemb * size);
	return (buf);
}
