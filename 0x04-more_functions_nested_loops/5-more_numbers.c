#include "main.h"
#include <stdio.h>

/**
* more_numbers - prints numbers 10 times.
*
* Return: void.
*/

void more_numbers(void)
{
    int i;
    int j;
    
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i <= 14; i++)
        {
        printf("%d", i);
        }
        putchar('\n');
    } 
}
