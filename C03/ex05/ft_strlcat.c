/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:46:50 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/28 14:07:59 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lenght;
	int				null_term;
	int				i;

	lenght = 0;
	i = 0;
	while (dest[lenght] != '\0' && lenght < size)
		lenght++;
	while (src[i] != '\0' && lenght < size - 1)
	{
		dest[lenght + i] = src[i];
		i++;
	}
	if (!(lenght <= size))
		dest[lenght + i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}	
	return (lenght + i);
}
