/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:18:07 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/22 13:45:09 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	loop;
	int	i;
	int	j;

	loop = size / 2;
	i = 0;
	j = size - 1;
	while (loop > 0 )
	{
		ft_swap(&tab[i], &tab[j]);
		loop--;
		j--;
		i++;
	}
}
