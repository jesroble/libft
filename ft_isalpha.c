/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:37:29 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:47:21 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static int	is_lowercase(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	is_uppercase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	if (!(is_lowercase(c) || is_uppercase(c)))
		return (0);
	return (1);
}
