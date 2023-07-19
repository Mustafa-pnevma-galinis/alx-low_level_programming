#include "main.h"

/**
* print_sign - a function returns 0 if number smaller than  0; -1 if number equals 0; 1 if number bigger than 0
* @n: Integer that will be checked.
* Return: 0 or 1 or -1
*/

int print_sign(int n){
            if (n > 0)
	      {
                _putchar('+');
                return (1);
            }
            else if (n == 0){
                _putchar('0');
                return (0);
            }
            else {
               _putchar('-');
               return (-1);
            }
            }
