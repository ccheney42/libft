/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:05:38 by ccheney           #+#    #+#             */
/*   Updated: 2018/05/09 16:28:25 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = ft_strnew(ft_strlen(s1));
	if (s2)
		return (ft_strcpy(s2, (char*)s1));
	return (0);
}
