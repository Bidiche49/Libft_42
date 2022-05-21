/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:01:48 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/21 15:41:52 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t size, size_t nbOctet)
{
	void	*ptralloc;

	ptralloc = malloc(nbOctet * size);
	if (!ptralloc)
		return (NULL);
	ft_bzero(ptralloc, nbOctet * size);
	return (ptralloc);
}
