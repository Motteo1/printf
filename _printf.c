#include "main.h"

/**
 * printString - prints a string
 * 
 * Return: nothing
 */

void printString(char *ch)
{
    while (*ch != '\0')
    {
        putchar(*ch); /* print letter */
        ch = ch + 1;  /* point to the next letter. */
    }
}
