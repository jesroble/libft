/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:03:43 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:50:59 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*i;
	int		n;

	i = NULL;
	n = 0;
	while (s[n])
	{
		if (s[n] == (char) c)
			i = (char *) &s[n];
		n++;
	}
	if ((char) c == '\0')
		return ((char *) &s[n]);
	return (i);
}
