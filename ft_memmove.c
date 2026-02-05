/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:34:31 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/14 21:12:59 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t n)
{
	unsigned char		*c_des;
	const unsigned char	*c_src = (const unsigned char *) src;
	size_t				i;

	c_des = (unsigned char *) des;
	if (c_des < c_src)
	{
		i = 0;
		while (i < n)
		{
			c_des[i] = c_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			c_des[i] = c_src[i];
		}
	}
	return (des);
}
