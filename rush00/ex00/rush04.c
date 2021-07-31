#include <unistd.h>

void	ft_putchar(char c);

void	ft_decideprint(int x, int y, int line, int column)
{
	if (column == x || column == 1 || line == y || line == 1)
	{
		if ((column == x && line == 1) || (column == 1 && line == y))
			ft_putchar('C');
		else if (column == 1 && line == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	line;

	column = x;
	line = y;
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		column --;
	}
	while (line > 0)
	{
		while (column > 0)
		{
			ft_decideprint(x, y, line, column);
			column --;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		column = x;
		line --;
	}
}
