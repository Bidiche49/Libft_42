/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:54:50 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/24 18:28:51 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			len_dest;
	size_t			len_src;

	i = -1;
	if (!dest && !src)
		return (0);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if ((size < len_dest + 1))
		return (len_src + size);
	if (size >= len_dest + 1)
	{
		while (src[++i] && len_dest + i + 1 < size)
			dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
