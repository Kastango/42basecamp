/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:37:20 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/31 03:45:01 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char str)
{	
	if (!(str >= '0' && str <= '9'))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	negative;
	int	sum;
	int	i;

	negative = 1;
	sum = 0;
	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] == '-')
			negative *= -1;
		if (ft_str_is_numeric(str[i]))
		{
			sum = sum * 10 + (str[i] - '0');
			if (!(ft_str_is_numeric(str[i + 1])))
				break ;
		}
		i++;
	}
	return (sum * negative);
}

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

void	ft_atoi_like_test(char *str)
{
	int buff;
	int ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int		main(void)
{
	char *str;

	// quando o comportamento e igual ao de atoi
	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str);
	// quando o comportamento e diferente ao de atoi
	str = " \n \t \r \v --+-+-+-aaa2147483648asd";
	ft_atoi_unlike_test(str, -2147483648);
	str = " \n \t\f\r \v -++-+-++aaaa1234b67asd";
	ft_atoi_unlike_test(str, -1234);
	return (0);
}