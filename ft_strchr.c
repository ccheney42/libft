/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:39:10 by ccheney           #+#    #+#             */
/*   Updated: 2018/03/06 21:01:17 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int x;

	x = -1;
	while ((x++ < (int)ft_strlen(s)))
		if (*(s + x) == (char)c)
			return ((char *)s + x);
	return (NULL);
}
