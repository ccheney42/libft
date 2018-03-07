/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:45:48 by ccheney           #+#    #+#             */
/*   Updated: 2018/02/26 20:46:58 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	x;

	x = 0;
	while (*(s1 + x) && *(s1 + x) == *(s2 + x) && x < (int)n - 1)
		x++;
	if (n)
		return (*((unsigned char *)s1 + x) - *((unsigned char *)s2 + x));
	return (0);
}
