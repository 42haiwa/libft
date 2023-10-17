/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjouenne <cjouenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:36:04 by cjouenne          #+#    #+#             */
/*   Updated: 2023/10/17 14:56:34 by cjouenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ssize_t	count_digits(int n)
{
	ssize_t	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		cnt++;
	}
	while (n != 0)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*buf;
	ssize_t	buf_len;

	buf_len = count_digits(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	buf = (char *) ft_calloc(count_digits(n) + 1, 1);
	if (!buf)
		return (NULL);
	if (n < 0)
	{
		buf[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		if (buf[buf_len - 1] == '-')
			break ;
		buf[buf_len - 1] = n % 10 + 48;
		n /= 10;
		buf_len--;
	}
	return (buf);
}
