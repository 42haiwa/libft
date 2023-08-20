/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:20:33 by cjouenne          #+#    #+#             */
/*   Updated: 2023/08/04 12:02:41 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	int		good;

	i = 0;
	little_len = ft_strlen(little);
	if (*little == 0)
		return ((char *) big);
	while (i + little_len <= len && big[i])
	{
		j = 0;
		good = 1;
		while (j < little_len && little[j] && i + j < len)
		{
			if (big[i + j] != little[j])
				good = 0;
			j++;
		}
		if (good)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
