#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include<string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i = 97;
	while (i < 123){
		putchar(i);
		i++;
	}
	int c = 65;
	while (c < 91){
       putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
