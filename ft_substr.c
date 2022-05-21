/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:46:37 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/21 16:12:17 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp_s;
	char	*res;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	tmp_s = (char *)s;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	while ((start + i) < ft_strlen(s) && i < len)
	{
		res[i] = tmp_s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
