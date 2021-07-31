void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	line;

	column = x;
	line = y;
	while (line > 0 )
	{
		while (column > 0)
		{
			if ((line == y || line == 1) && (column == x || column == 1))
				ft_putchar('o');
			else if (column < x && column > 1 && (line == y || line == 1))
				ft_putchar('-');
			else if ((line < y && line > 1) && (column == x || column == 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			column--;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		column = x;
		line--;
	}
}
