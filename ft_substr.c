/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:58:18 by cjouenne          #+#    #+#             */
/*   Updated: 2023/08/04 11:57:57 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		buf = malloc(sizeof(char));
		if (!buf)
			return (NULL);
		*buf = 0;
		return (buf);
	}
	if (ft_strlen(s) - start >= len)
		buf = ft_calloc(len + 1, sizeof(char));
	else
		buf = ft_calloc(ft_strlen(s) - start + 1, sizeof(char));
	if (!buf)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		buf[i] = s[start + i];
		i++;
	}
	buf[i] = 0;
	return (buf);
}
