#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long nb)
{
	if (nb < 0 )
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb / 10 )
	{
		ft_putnbr(nb / 10 );
	}
	ft_putchar('0' +(nb % 10));
}
