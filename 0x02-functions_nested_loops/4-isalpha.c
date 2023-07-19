#include "main.h"


/**
* _isalpha - a function returns 0 if c is character otherwise 0. 
* @c: is an ascii code of the character
* Return: 0 or 1
*/

int _isalpha(int c){

  if ((c >= 97 && c <= 122)||(c >= 65 && c <= 90))
    {
                return 1;
            }
            else{
                return 0;
            }
}
