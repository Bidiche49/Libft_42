/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:38:10 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/21 13:46:37 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					i;
	const unsigned char	unsign_c = (unsigned char)c;

	i = (int)ft_strlen(s);
	if (s[i] == unsign_c && unsign_c == '\0')
		return ((char *)s + i);
	while (--i >= 0)
	{
		if (s[i] == unsign_c)
			return ((char *)s + i);
	}
	return (NULL);
}
