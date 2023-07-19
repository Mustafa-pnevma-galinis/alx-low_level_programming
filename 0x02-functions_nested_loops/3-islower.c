#include "main.h"


/**
* _islower - a function returns 0 if character is uppercase and 1 if character is lower 
* @c: is an ascii code of the character
* Return: 0 or 1
*/

int _islower(int c){
  if (c < 97){
      return 0;
  }
  else{
      return 1;
          }
}
