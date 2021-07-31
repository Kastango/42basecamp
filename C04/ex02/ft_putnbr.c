/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:29:19 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/31 03:19:54 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char x)
{
	write (1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putchar ('-');
		putchar ('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		putchar('-');
	}
	if (nb < 10)
	{
		putchar (nb + '0');
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}
