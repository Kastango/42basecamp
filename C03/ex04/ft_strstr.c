/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 02:11:00 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/31 02:10:33 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_c;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		str_c = str;
		while (*str_c == *to_find && *str_c != '\0' && *to_find != '\0')
		{
			str_c++;
			to_find++;
		}
		if (*to_find == '\0')
			return (str);
		str++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	printf("%s ", ft_strstr("um texto bacana", "bsc"));
}