/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:59:36 by cjouenne          #+#    #+#             */
/*   Updated: 2023/08/04 19:24:48 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buf;
	unsigned int	i;

	buf = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!buf)
		return (NULL);
	i = 0;
	while (s[i])
	{
		buf[i] = (*f)(i, s[i]);
		i++;
	}
	buf[i] = 0;
	return (buf);
}
