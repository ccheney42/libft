/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:28:42 by ccheney           #+#    #+#             */
/*   Updated: 2018/03/06 20:56:38 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ncpy(char *dst, const char *src, size_t len)
{
	size_t x;

	x = 0;
	while (src[x] != '\0' && x < len)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (dst);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	x;
	size_t			end;
	char			*sub;

	x = 0;
	if (!s)
		return (NULL);
	while (WHITESPACE(s[x]))
		x++;
	if (x == ft_strlen(s))
		return (ft_strnew(0));
	end = ft_strlen(s) - 1;
	while (WHITESPACE(s[(int)end]))
		end--;
	if ((sub = ft_memalloc(end - x + 1)))
	{
		sub = ft_ncpy(sub, s + x, end - x + 1);
		return (sub);
	}
	return (NULL);
}
