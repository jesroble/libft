/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:46:56 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:49:15 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <memory.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	if (!dst && !src)
		return (NULL);
	ptrdst = (unsigned char *) dst;
	ptrsrc = (unsigned char *) src;
	if (src < dst)
	{
		ptrsrc += len;
		ptrdst += len;
		while (len-- > 0)
		{
			*--ptrdst = *--ptrsrc;
		}
	}
	else
	{
		while (len-- > 0)
		{
			*ptrdst++ = *ptrsrc++;
		}
	}
	return (dst);
}
