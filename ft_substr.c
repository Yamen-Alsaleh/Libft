/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 20:09:50 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/11 14:26:15 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
	{
		p = (char *)malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, (len + 1));
	return (p);
}
