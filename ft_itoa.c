/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:00:21 by ccheney           #+#    #+#             */
/*   Updated: 2018/03/05 16:49:07 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(int n)
{
	size_t			i;

	i = 1;
	while ((n > 0 ? n : -n) >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long		n2;
	char		*str;
	size_t		str_len;

	str_len = (count_digit(n));
	n2 = n;
	if (n2 == -2147483648)
		return (str = ft_strdup("-2147483648"));
	if (n < 0)
	{
		str_len++;
		n2 = -n;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[str_len] = '\0';
	while (str_len > 0)
	{
		str_len--;
		str[str_len] = (n2 % 10) + '0';
		n2 /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
