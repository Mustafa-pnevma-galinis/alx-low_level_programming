#include "stdio.h"
#include <main.h>

/**
 * print_triangle - print a tri.
 * @size: size of triangle size.
 * Return: void.
 */

void print_triangle(int size)
{
       int i;
       int j;
       
       if (size <= 0) 
        {
              _putchar("\n");
        } 
       else 
       {
            for (i = 0; i < size; i++) 
            {
              for (int j = 0; j <= i; j++) 
              {
              _putchar("#");
              }
            _putchar("\n");
            }
        }
}
