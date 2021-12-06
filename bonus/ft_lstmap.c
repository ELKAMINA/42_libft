/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:04:51 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 18:07:22 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*chain_list;
	t_list	*el;

	if (!f || !del)
		return (NULL);
	chain_list = NULL;
	while (lst)
	{
		if (!ft_lstnew(f(lst -> content)))
		{
			ft_lstclear(&chain_list, del)
			return (NULL);
		}
		el = ft_lstnew(f(lst -> content));
		ft_lstadd_back(&chain_list, el);
		lst = lst -> next;
	}
	return (chain_list);
}
