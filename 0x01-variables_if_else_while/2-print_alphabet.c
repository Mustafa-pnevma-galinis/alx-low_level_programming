#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include<string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{

    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int size = sizeof(str) - 1;
    int count = 0;

    while (count <= size){
        putchar(tolower(str[count]));
        count++;
    }
    putchar('\n');
	return (0);
}
