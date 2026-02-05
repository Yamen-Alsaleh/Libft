/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 22:43:58 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/11 14:34:44 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check_char(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_char(s1[end - 1], set))
		end--;
	p = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (start < end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
