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

void	ft_print_combn(int n)
{
	char digits[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i = 0;

	char pos[n-1];

	while (digits[n-1] != pos[i-1])
	{
		pos[i] = digits[i];
		//write(1, &pos[i], 1);
		i++;
	}
	int aux = 0;
	i = n;
	int j = n;
	char a = ' ';
	while(pos[i] != (digits[j] != '\0'))
	{
		pos[i-1] = digits[j-1];
		while(pos[aux] != '\0')
		{
			write(1, &pos[aux], 1);
			aux++;
		}
		ft_print_space_comma();
		aux = 0;
		j++;
		if(pos[j] == '9'){
			pos[i] = digits[i];
			j = i;
			i++;
		}
	}
}

int main(void){
	ft_print_combn(4);
}