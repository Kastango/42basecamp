#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int num)
{
	ft_putchar('0' + (num / 10));
	ft_putchar('0' + (num % 10));
}

void	ft_print_space_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	aux;
	int	i;
	int	j;

	aux = 2;
	i = 1;
	j = 0;
	while (j <= 98 )
	{
		while (i <= 99 )
		{
			ft_print_number(j);
			ft_putchar(' ');
			ft_print_number(i);
			if (!(i == 99 && j == 98))
				ft_print_space_comma();
			i++;
		}
		i = aux;
		j++;
		aux++;
	}
}
