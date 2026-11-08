/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abed-dyb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:09:30 by abed-dyb          #+#    #+#             */
/*   Updated: 2026/10/22 11:15:38 by abed-dyb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_go;

	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		to_go = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = to_go;
	}
}
