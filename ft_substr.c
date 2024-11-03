/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:03:33 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:51:09 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substring;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		substring = (char *)malloc(1);
		if (substring)
		{
			*substring = '\0';
			return (substring);
		}
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substring = malloc(len + 1);
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}
