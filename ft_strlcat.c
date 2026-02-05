/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 20:25:51 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/14 15:19:19 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + src_len);
	else
	{
		ft_strlcpy(dst + dst_len, src, size - dst_len);
		return (dst_len + src_len);
	}
}
