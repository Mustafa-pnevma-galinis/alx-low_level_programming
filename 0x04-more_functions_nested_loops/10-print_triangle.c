#include "stdio.h"
#include <main.h>

/**
 * main - print triangle
 *
 * Return: Always 0
 */

int main(void)
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
