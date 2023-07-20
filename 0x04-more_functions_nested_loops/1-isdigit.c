#include "main.h"

/**
* _isdigit - return 1 if the provided character is uppercase and 0 if else.
* @c: A character.
* Return: 1 or 0.
*/

int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
            return (1);
        }
        else 
        {
            return (0);
        }
}
