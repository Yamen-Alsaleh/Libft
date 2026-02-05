/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 23:47:35 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/05 00:03:03 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	printnum(long n, int fd)
{
	char	temp;

	if (n > 9)
	{
		printnum(n / 10, fd);
		temp = n % 10 + '0';
		write(fd, &temp, 1);
	}
	else
	{
		temp = n + '0';
		write(fd, &temp, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		l = l * -1;
	}
	printnum(l, fd);
}
