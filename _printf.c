#include "main.h"

/**
 *
 *
 *
 */

void printString(char *ch)
{
    while (*ch != '\0')
    {
        putchar(*ch); /* print letter */
        ch = ch + 1;  /* point to the next letter. */
    }
}

#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
	}

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
