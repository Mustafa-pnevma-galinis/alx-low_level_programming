#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include<string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int comma = 44;
    int space = 32;

    int number = 48;


    while (number < 58){

        putchar(number);
        if (number != 57){
            putchar(comma);

            putchar(space);
        }

        number++;

    }
	putchar('\n');
	return (0);
}
