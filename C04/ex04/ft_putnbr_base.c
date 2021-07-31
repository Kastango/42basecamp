/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:54:44 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/29 16:31:15 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkbase(char *base)
{
	int	j;
	int	i;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{	
	int	size;
	int	i;
	int	display[100];

	i = 0;
	size = 0;
	if (checkbase(base))
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
		}
		while (base[size] != '\0')
			size++;
		while (nbr != 0)
		{
			display[i] = nbr % size;
			nbr = nbr / size;
			i++;
		}
		while (i-- > 0)
			ft_putchar(base[display[i]]);
	}
}


