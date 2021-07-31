/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:02:14 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/30 03:19:48 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	number;

	number = nb;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * number;
		power--;
	}
	return (nb);
}
