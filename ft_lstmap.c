/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 22:01:26 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/11 15:01:05 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*old_lst;

	old_lst = lst;
	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while (old_lst)
	{
		new_node = ft_lstnew(f(old_lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		old_lst = old_lst->next;
	}
	return (new_list);
}
