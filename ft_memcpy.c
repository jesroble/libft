/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:09:19 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:49:09 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <memory.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*str;

	if (!dst && !src)
		return (NULL);
	ptr = (unsigned char *) dst;
	str = (const unsigned char *) src;
	while (n-- > 0)
	{
		*ptr++ = *str++;
	}
	return (dst);
}
