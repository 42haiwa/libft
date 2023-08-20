/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:51:04 by cjouenne          #+#    #+#             */
/*   Updated: 2023/08/04 16:25:49 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s || !(*s))
		return (NULL);
	while (s[i])
	{
		if (s[i] == (const char) c)
			return ((char *) s + i);
		i++;
	}
	if (s[i] == (const char) c)
		return ((char *) s + i);
	return (NULL);
}
