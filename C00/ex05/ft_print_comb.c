#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_space_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (!(x == '7' && y == '8' && z == '9'))
		ft_print_space_comma();
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0' ;
	y = '1' ;
	z = '2' ;
	while (x <= '7' )
	{
		while (y <= '8')
		{
			while (z <= '9' )
			{
				if (x < y < z && x < y && y < z)
				{
					ft_print(x, y, z);
				}
				z++ ;
			}
			z = '0';
			y++;
		}
		y = '0';
		x++;
	}
}
