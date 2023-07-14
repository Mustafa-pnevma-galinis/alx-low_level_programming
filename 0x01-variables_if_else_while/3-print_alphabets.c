#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
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
	
	putchar(10);
	
	return (0);
}
