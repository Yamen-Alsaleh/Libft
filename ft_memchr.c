/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:41:26 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/11/29 18:14:20 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = (const unsigned char *)s;
	unsigned char		t;
	size_t				i;

	t = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == t)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
