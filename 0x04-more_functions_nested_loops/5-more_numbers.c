#include "main.h"
#include <stdio.h>

/**
* more_numbers - prints numbers 10 times.
*
* Return: void.
*/

void more_numbers(void)
{
int val = 48;
        int count = 0;

        while (val < 58)
        {
            _putchar(val);

            val += 1;

            if (val == 58 && count <= 8)
            {
                count++;
                val = 48;
                _putchar('\n');
            }
        }
        putchar('\n');
}
