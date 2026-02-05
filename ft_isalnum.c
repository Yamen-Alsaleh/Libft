/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:51:41 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/11/28 15:55:57 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int     main(void)
{
        printf("%d",ft_isalnum(50));
        printf("%d",ft_isalnum(66));
        printf("%d",ft_isalnum(100));
	printf("%d",ft_isalnum(33));
        return (0);
}*/
