#include <stdio.h>

/**
* main - program
* Return: always 0
*/

int main(void)
{
	int i, c;
	
	i = 97;
	c = 65;
	
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	
	while (c < 91)
	{
        	putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
