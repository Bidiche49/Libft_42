/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:33:07 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/10 19:46:45 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_lst;

	while ((*lst))
	{
		tmp_lst = (*lst)->next;
		(*del)((*lst)->content);
		free((*lst));
		(*lst) = tmp_lst;
	}
}
