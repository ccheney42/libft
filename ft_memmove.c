/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:10:47 by ccheney           #+#    #+#             */
/*   Updated: 2018/03/06 20:54:45 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	i = -1;
	dst2 = (char*)dst;
	src2 = (char*)src;
	if (src2 < dst2)
		while (len--)
			dst2[len] = src2[len];
	else
		ft_memcpy(dst2, src2, len);
	return (dst2);
}
