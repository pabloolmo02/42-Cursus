/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:29:57 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/06/04 19:51:18 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (!lst || !new)
		return;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->next = NULL;
}
static	*ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	lstnew;
	t_list	nodenew;

	if (!lst || !f || !del)
		return (NULL);
	lstnew = NULL;
	while (lst)
	{
		nodenew = ft_lstnew(0);
		if (nodenew == NULL)
		{
			ft_lstclear(&lstnew, del);
			return (NULL);
		}
		nodenew->content = (*f)(lst->content);
		ft_lstadd_back(&lstnew, nodenew);
		lst = lst->next;
	}
	return (lstnew);
}
