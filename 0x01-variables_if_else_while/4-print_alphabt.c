#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include<string.h>

int main(void)
{
	int i = 97;
	while (i < 123){

	   if (i != 98 && i != 122){
            putchar(i);

		}
        i++;
	}

	putchar('\n');
	return (0);
}
