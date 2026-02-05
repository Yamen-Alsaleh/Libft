/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:35:50 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/11/28 17:30:26 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*start;
	size_t			i;

	if (n == 0)
		return (s);
	start = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		start[i] = c;
		i++;
	}
	return (s);
}
