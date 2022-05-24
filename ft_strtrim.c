/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:39:50 by ntardy            #+#    #+#             */
/*   Updated: 2022/05/24 18:33:20 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int			start;
	int			end;
	const int	len_res = (int)ft_strlen(s1);

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[start] && s1[len_res - end - 1]
		&& ft_strrchr(set, s1[len_res - end - 1]))
		end++;
	return (ft_substr(s1, start, (len_res - end - start)));
}
