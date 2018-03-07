/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:47:25 by ccheney           #+#    #+#             */
/*   Updated: 2018/03/06 21:00:21 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	pos;
	size_t			len;

	i = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		pos = 0;
		while (needle[pos] == haystack[pos + i])
		{
			if (pos == (len - 1))
				return ((char*)haystack + i);
			pos++;
		}
		i++;
	}
	return (NULL);
}
