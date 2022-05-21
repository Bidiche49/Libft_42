/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:03:32 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/04 13:16:26 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	i = -1;
	j = 0;
	len = (int)ft_strlen(s1) + (int)ft_strlen(s2) + 1;
	res = malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	while (s1[++i])
		res[j++] = s1[i];
	i = -1;
	while (s2[++i])
		res[j++] = s2[i];
	res[j] = '\0';
	return (res);
}
