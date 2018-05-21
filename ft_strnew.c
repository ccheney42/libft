/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:48:48 by ccheney           #+#    #+#             */
/*   Updated: 2018/05/21 15:37:51 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *temp;

	temp = (char *)(ft_memalloc(sizeof(char) * size + 1));
	if (!temp)
		return (NULL);
	ft_memset(temp, (int)'\0', size + 1);
	return (temp);
}
