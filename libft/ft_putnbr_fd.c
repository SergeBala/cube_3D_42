/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:40:45 by sbalasho          #+#    #+#             */
/*   Updated: 2023/02/02 13:40:51 by sbalasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0 && n > -2147483648)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	if (n != -2147483648)
		ft_putchar_fd(n % 10 + 48, fd);
	return ;
}
