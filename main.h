#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

/**
 * struct type - connect conversion specifiers with the correct print function
 * @print: a function pointer for the print functions
 * @identifier: the conversion specifier
 */

typedef struct type
{
	char *identifier;
	int (*print)(va_list);
} type_t;

/* printf functions */

int _putchar(char c);
int _printf(const char *format, ...);

#endif
