/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:10:51 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:50:54 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	n = 0;
	h = 0;
	if (needle[n] == '\0')
		return ((char *) haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h] == needle[n] && haystack[h] != '\0' && h < len)
		{
			n++;
			h++;
		}
		if (needle[n] == '\0')
			return ((char *) &haystack[h - n]);
		h = (h - n) + 1;
	}
	return (NULL);
}
