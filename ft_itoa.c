/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:38:16 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/16 16:57:28 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*p;
	size_t	l;

	nb = n;
	l = length(nb);
	p = (char *)ft_calloc(l + 1, sizeof(char));
	if (!p)
		return (NULL);
	if (nb == 0)
		p[0] = '0';
	if (n < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		p[--l] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (p);
}
