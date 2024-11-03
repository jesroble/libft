/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:07:43 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:47:43 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		countdigit;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	itoa = (char *)malloc((count_digits(n) + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	countdigit = count_digits(n);
	if (n < 0)
	{
		itoa[0] = '-';
		n = -n;
	}
	itoa[countdigit--] = '\0';
	if (n == 0)
		itoa[0] = '0';
	while (n > 0)
	{
		itoa[countdigit--] = '0' + n % 10;
		n = n / 10;
	}
	return (itoa);
}
