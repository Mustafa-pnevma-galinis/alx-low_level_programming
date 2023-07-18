#include "main.h"

/**
* print_alphabet is a function to print entire en alphabet in lowercase
* 
* Return: void
*/
void print_alphabet(){
    int val = 97;

    while (val <= 122)
    {
        putchar(val);
        val += 1;
    }
}
print_alphabet();

putchar('\n');


