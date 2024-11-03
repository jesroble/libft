/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:59:22 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:50:24 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	td;
	size_t	ts;

	i = 0;
	td = ft_strlen(dst);
	ts = ft_strlen(src);
	if (dstsize <= td)
		return (ts + dstsize);
	while (src[i] != '\0' && td + i < dstsize - 1)
	{
		dst[i + td] = src[i];
		i++;
	}
	dst[i + td] = '\0';
	return (td + ts);
}
