/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:36:04 by cjouenne          #+#    #+#             */
/*   Updated: 2023/08/04 19:20:05 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	size_t	ctr;

	ctr = 0;
	if (n <= 0)
	{
		n *= -1;
		ctr++;
	}
	while (n > 0)
	{
		n /= 10;
		ctr++;
	}
	return (ctr);
}

char	*ft_itoa(int n)
{
	char	*buf;
	int		buf_len;

	if (n == -2147483648)
	{
		buf = ft_strdup("-2147483648");
		return (buf);
	}
	if (n == -1)
	{
		buf = ft_strdup("-1");
		return (buf);
	}
	buf_len = count_digits(n);
	buf = (char *) ft_calloc(buf_len + 1, sizeof(char));
	if (!buf)
		return (NULL);
	buf[buf_len--] = 0;
	while (buf_len >= 0)
	{
		buf[buf_len] = n % 10 + 48;
		n /= 10;
		buf_len--;
	}
	return (buf);
}
