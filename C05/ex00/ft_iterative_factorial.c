/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:28:16 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/30 03:14:27 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	value;

	i = 1;
	value = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		value *= i;
		i++;
	}
	return (value);
}
