#include <unistd.h>

void test(int x, int y)
{
	char a = 'o';
	char b = '-';
	char c = '|';
	char d = ' ';

	int counter_x = 1;
	int counter_y = 1;

	while(counter_y <= y)
	{
		if(counter_y == 1 || counter_y == y)
		{	//stampe riga iniziale e finale
			while(counter_x <= x)
       			{
                	if(counter_x == 1 || counter_x == x)
                	{ write(1, &a, 1); }
                	else
                	{ write(1, &b, 1); }
        		counter_x++;
        		}
			counter_x = 1;
			write(1, "\n", 1);
		}
		else	//stampa righe centrali
		{
			while(counter_x <= x)
                        {
                        if(counter_x == 1 || counter_x == x)
                        { write(1, &c, 1); }
                        else
                        { write(1, &d, 1); }
                        counter_x++;
                        }
			counter_x = 1;
			write(1, "\n", 1);
		}
	counter_y++;
	}
}	

int main ()
{
	test(110, 14);
	test(1, 56);
	//test(5, 1);
	//test(4, 4);
	return(0);
}	
