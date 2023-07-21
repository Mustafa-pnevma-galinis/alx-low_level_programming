#include "main.h"
#include <stdio.h>

/**
 * main - take the fizz-buzz challenge
 *
 * Return: Always 0
 */

int main(void) 
{
  int i;
  
  for (i = 1; i < 101; i++) 
  {
      if (i % 3 == 0 && i % 5 == 0) 
      {
        printf("FizzBuzz ");
      } 
      else if (i % 3 == 0) 
      {
        printf("Fizz ");
      } 
      else if (i % 5 == 0) 
      {
          if (n == 100)
          {
            printf("Buzz");
          }
          else
          {
            printf("Buzz ");
          }
      } 
      else 
      {
        printf("%d", i);
      } 
  }
  printf("\n");

  return (0);
}
