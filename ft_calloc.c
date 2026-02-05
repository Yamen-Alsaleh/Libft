/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 19:26:07 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/02 19:54:48 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	p = (void *)malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}
