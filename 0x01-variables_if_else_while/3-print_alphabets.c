#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include<string.h>

/**
* main - program
* Return: always 0
*/

int main(void)
{
	int i = 97;
	int c = 65;
	
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
