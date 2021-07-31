/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 01:28:30 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/28 14:21:31 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	index;

	index = 0;
	ptr = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && index < nb)
	{
		*dest++ = *src++;
		index++;
	}
	*dest = '\0';
	return (ptr);
}
