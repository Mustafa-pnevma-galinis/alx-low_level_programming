#include "main.h"

/**
 * print_square - draws a square
 * @size: number of times
 *
 * Return: void
 */

void print_square(int size) {
  if (size <= 0) 
  {
    printf("\n");
  } else 
  {
    for (int i = 0; i < size; i++) 
    {
      for (int j = 0; j < size; j++) 
      {
        printf("#");
      }
      printf("\n");
    }
  }
}
   
