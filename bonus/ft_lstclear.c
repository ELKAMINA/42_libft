/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:56:04 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:57:26 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void	*))
{
	t_list	*after;
	t_list	*actual;

	if (!*lst || !del)
		return ;
	actual = *lst;
	while (*lst != NULL)
	{
		next = *actual -> next;
		ft_lstdelone(*actual, del);
		*actual = after;
	}
	*lst = NULL;
}
