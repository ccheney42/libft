/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:43:22 by ccheney           #+#    #+#             */
/*   Updated: 2018/02/26 20:45:20 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	x;

	x = 0;
	while (*(s1 + x) && *(s1 + x) == *(s2 + x))
		x++;
	return (*((unsigned char *)s1 + x) - *((unsigned char *)s2 + x));
}
