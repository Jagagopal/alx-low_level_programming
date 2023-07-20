#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints number followed by a seperator.
 * @n: This the number of arguments passed to the function
 * @separator: String to be printed
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
