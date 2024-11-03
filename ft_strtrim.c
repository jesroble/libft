/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:05:23 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:51:04 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	findstart(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

static size_t	findend(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*sf;

	i = 0;
	start = 0;
	end = ft_strlen (s1);
	if (!set)
		return ((char *) s1);
	if (!s1)
		return (NULL);
	start = findstart(s1, set);
	end = findend(s1, set, start);
	sf = malloc(end - start + 1);
	if (!sf)
		return (NULL);
	while (start < end)
	{
		sf[i++] = s1[start++];
	}
	sf[i] = '\0';
	return (sf);
}
