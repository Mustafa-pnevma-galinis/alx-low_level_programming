#include "main.h"
#include <stdio.h>

/**
* print_alphabet_x10 - a function to print entire en alphabet in lowercase 10 times
* 
* Return: void
*/


void print_alphabet_x10(void){


        int val = 97;
        int count = 0;

        while (val < 123)
        {
            _putchar(val);

            val += 1;

            if (val == 123 && count <= 8)
            {
                count++;
                val = 97;
                _putchar('\n');
            }
        }
        putchar('\n');  
    }
