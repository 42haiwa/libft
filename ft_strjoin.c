/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:22:54 by cjouenne          #+#    #+#             */
/*   Updated: 2023/10/17 12:41:34 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;

	buf = (char *) ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (buf == NULL)
		return (NULL);
	ft_strlcpy(buf, s1, ft_strlen(s1) + 1);
	ft_strlcat(buf, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (buf);
}
