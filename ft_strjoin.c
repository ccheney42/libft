/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:22:02 by ccheney           #+#    #+#             */
/*   Updated: 2018/04/27 21:15:21 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strjoin(char const *s1, char const *s2)
{
	char *temp;

	if (!s1 || !s2)
		return (NULL);
	if (!(temp = (char *)malloc(ft_strlen((char *)s1) +
					ft_strlen((char *)s2) + 1)))
		return (NULL);
	temp = ft_strcpy(temp, s1);
	temp = ft_strcat(temp, s2);
	return (temp);
}
