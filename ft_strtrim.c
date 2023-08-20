/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:22:02 by cjouenne          #+#    #+#             */
/*   Updated: 2023/08/04 15:33:10 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	size_t	start;
	size_t	end;
	size_t	buf_len;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	buf_len = end - start + 1;
	buf = (char *) ft_calloc(buf_len + 1, sizeof(char));
	ft_strlcpy(buf, s1 + start, buf_len + 1);
	buf[buf_len] = '\0';
	return (buf);
}
