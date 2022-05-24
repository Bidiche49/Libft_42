/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:55:39 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/24 18:31:48 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int					i;
	const unsigned char	unsign_c = (unsigned char)c;

	if (!s)
		return (NULL);
	i = -1;
	while (s[++i])
		if (s[i] == unsign_c)
			return ((char *)s + i);
	if (s[i] == unsign_c && unsign_c == '\0')
		return ((char *)s + i);
	return (NULL);
}
