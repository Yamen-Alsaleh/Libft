/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:10:53 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/11/29 20:18:52 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (i < len)
	{
		if (big[i] == '\0')
			break ;
		j = 0;
		if (big[i] == little[j])
		{
			while (i < len && big[i] == little[j])
			{
				i++;
				j++;
				if (little[j] == '\0')
					return ((char *)(big + i - j));
			}
		}
		i++;
	}
	return (NULL);
}
