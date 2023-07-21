#include "stdio.h"
#include <main.h>

/**
 * print_triangle - print a tri.
 * @size: size of triangle size.
 * Return: void.
 */

void print_triangle(int size)
{
       if (size <= 0) 
        {
              printf("\n");
        } 
       else 
       {
            for (int i = 0; i < size; i++) 
            {
              for (int j = 0; j <= i; j++) 
              {
              printf("#");
              }
            printf("\n");
          }
        }
}
