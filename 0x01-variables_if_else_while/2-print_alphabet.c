#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include<string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char str[27];
	int size;
	int count;
	char ch;

    str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    size = sizeof(str) - 1;

    count = 0;

    while (count <= size){
        ch = tolower(str[count]);
        putchar(ch);
        count++;
    }
    putchar('\n');
	return (0);
}
