#include "main.h"

/**
* print_last_digit - 
* @num: is a full number.
* Return: The last digit of the number.
*/

int print_last_digit(int num)
{
  int e;
  
  if (num < 0)
  {
    e = num%10 * -1;
    }

  _putchar(e + '0');

  return (e);
}
