/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:20:33 by cjouenne          #+#    #+#             */
/*   Updated: 2023/10/17 15:00:48 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	int		good;
	char	c;

	i = 0;
	little_len = ft_strlen(little);
	if (*little == 0)
		return ((char *) big);
	if (!big)
		c = *big;
	while (i + little_len <= len && big[i])
	{
		j = -1;
		good = 1;
		while (++j < little_len && little[j] && i + j < len)
			if (big[i + j] != little[j])
				good = 0;
		if (good)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
