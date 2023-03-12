/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:57:09 by knabeel           #+#    #+#             */
/*   Updated: 2022/08/09 14:16:31 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	i;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n / (-1), fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		i = n % 10 + '0';
		ft_putchar_fd(i, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*int main (void)
{
	ft_putnbr_fd (-15, 1);
}*/