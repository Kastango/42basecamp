#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	write(1, "rush(0, 0)\n", 11);
	rush(0, 0);
	write(1, "\nrush(1, 1)\n", 12);
	rush(1, 1);
	write(1, "\nrush(3, -1)\n", 13);
	rush(3, -1);
	write(1, "\nrush(-1, 3)\n", 13);
	rush(-1, 3);
	write(1, "\nrush(1, 5)\n", 12);
	rush(1, 5);
	write(1, "\nrush(5, 1)\n", 12);
	rush(5, 1);
	write(1, "\nrush(4, 4)\n", 12);
	rush(4, 4);
	write(1, "\nrush(20, 10)\n", 14);
	rush(20, 10);
	return (0);
}
