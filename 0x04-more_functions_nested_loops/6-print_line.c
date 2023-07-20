#include <main.h>

/**
* more_numbers - prints numbers 10 times.
* @n: number of times
* Return: void.
*/

void print_line(int n)
{
    if (n <= 0)
    {
       _putchar('\n'); 
    }
    else
    {
    for (int i = 0; i < n; i++)
    {
        _putchar('_');
    }
        _putchar('\n'); 
    }
   
}
