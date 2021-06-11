/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:22:28 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/11 00:43:03 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_node = lst;
	new_list = ft_lstnew(f(new_node->content));
	if (new_list)
	{
		new_list->next = ft_lstmap(new_node->next, f, del);
		return (new_list);
	}
	else
		ft_lstclear(&new_list, del);
	return (NULL);
}
