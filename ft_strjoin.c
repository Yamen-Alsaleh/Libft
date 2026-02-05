/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 22:10:38 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/11 14:31:15 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p = (char *)malloc(len1 + len2 + 1);
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_strlen(s1))
		p[i++] = s1[j++];
	j = 0;
	while (j < ft_strlen(s2))
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
