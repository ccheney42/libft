/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:58:24 by ccheney           #+#    #+#             */
/*   Updated: 2018/05/09 16:07:36 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;

	src2 = (char *)src;
	dst2 = (char *)dst;
	if (n == 0 || dst2 == src2)
	{
		return (dst2);
	}
	while (n > 0)
	{
		*dst2++ = *src2++;
		n--;
	}
	return (dst);
}
