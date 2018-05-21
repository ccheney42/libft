/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:46:57 by ccheney           #+#    #+#             */
/*   Updated: 2018/05/21 15:47:01 by ccheney          ###   ########.fr       */
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
