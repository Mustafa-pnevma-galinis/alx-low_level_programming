#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
		
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	
	putchar('\n');
	
	return (0);
}
