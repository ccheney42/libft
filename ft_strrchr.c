/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:42:01 by ccheney           #+#    #+#             */
/*   Updated: 2018/02/26 20:42:40 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int x;

	x = (int)ft_strlen(s) + 1;
	while (x--)
		if (*(s + x) == (char)c)
			return ((char *)s + x);
	return (NULL);
}
