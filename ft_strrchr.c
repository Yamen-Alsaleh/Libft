/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 22:21:28 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/14 15:34:44 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	ch = (char)c;
	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
