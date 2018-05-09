/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheney <ccheney@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:10:47 by ccheney           #+#    #+#             */
/*   Updated: 2018/03/06 20:54:45 by ccheney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t        i;
    
    if (dst == src)
        return (dst);
    if (dst > src)
    {
        i = len;
        while (i-- > 0)
            ((char*)dst)[i] = ((char*)src)[i];
    }
    else
    {
        i = 0;
        while (i < len)
        {
            ((char*)dst)[i] = ((char*)src)[i];
            i++;
        }
    }
    return (dst);
}
