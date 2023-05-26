#include <unistd.h>

void	ft_putchar(char x);

void	f_custom_1(int counter, int i, char p, char s)
{
	while (counter <= i)
	{
		if (counter == 1 || counter == i)
			ft_putchar(p);
		else
			ft_putchar(s);
		counter++;
	}
	counter = 1;
	write(1, "\n", 1);
}

void	f_custom_2(int counter, int i, char s)
{
	while (counter <= i)
	{
		if (counter == 1 || counter == i)
			ft_putchar(s);
		else
			write(1, " ", 1);
		counter++;
	}
	counter = 1;
	write(1, "\n", 1);
}

void	f_custom_3(int counter, int i, char s)
{
	while (counter <= i)
	{
		if (counter == 1 || counter == i)
			write(1, "C", 1);
		else
			ft_putchar(s);
		counter++;
	}
	counter = 1;
	write(1, "\n", 1);
}

void	rush02(int x, int y)
{
	char	a;
	char	b;
	int		counter_x;
	int		counter_y;

	a = 'A';
	b = 'B';
	counter_x = 1;
	counter_y = 1;
	if (x > 0 && y > 0)
	{
		while (counter_y <= y)
		{
			if (counter_y == 1)
				f_custom_1(counter_x, x, a, b);
			else if (counter_y == y)
				f_custom_3(counter_x, x, b);
			else
				f_custom_2(counter_x, x, b);
			counter_y++;
		}
	}
	else
		write(1, "x e y devono essere maggiori di zero.", 37);
}
