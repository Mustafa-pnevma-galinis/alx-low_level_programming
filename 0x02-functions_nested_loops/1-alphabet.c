#include "main.h"

/**
* print_alphabet - a function to print entire en alphabet in lowercase
* 
* Return: void
*/

void print_alphabet(void)
{
    int val = 97;

        while (val <= 122)
        {
        _putchar(val);
        val += 1;
        }   
        _putchar('\n');
}




