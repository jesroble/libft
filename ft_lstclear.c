/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerope200 <jerope200@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:07:04 by jesroble          #+#    #+#             */
/*   Updated: 2024/11/03 19:48:06 by jerope200        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*freenode;

	while (*lst != NULL)
	{
		freenode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = freenode;
	}
}
