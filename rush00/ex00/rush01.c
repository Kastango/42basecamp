#include <unistd.h>

void	ft_putchar(char c);

void	ft_decideprint(int x, int y, int i, int j)
{
	if (j == 0 || i == 0 || i == y - 1 || j == x - 1 )
	{
		if (j == 0 && i == 0)
			ft_putchar('/');
		else if (j == x - 1 && i == y - 1 && i != 0 && j != 0)
			ft_putchar('/');
		else if ((j == x - 1 && i == 0) || (j == 0 && i == y - 1 ))
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			ft_decideprint(x, y, i, j);
			j++;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		j = 0;
		i++;
	}
}
