/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:11:34 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/18 19:31:37 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_res;
	t_list	*element;

	lst_res = NULL;
	while (lst)
	{
		element = ft_lstnew((*f)(lst->content));
		if (element == NULL)
		{
			(*del)(element->content);
			free(element);
		}
		ft_lstadd_back(&lst_res, element);
		lst = lst->next;
	}
	return (lst_res);
}
