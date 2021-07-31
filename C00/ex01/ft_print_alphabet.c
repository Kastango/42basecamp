#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 'abcdef';

	write( 1, "abcdefghijklmopqrstuvxyz",	6		);

}
