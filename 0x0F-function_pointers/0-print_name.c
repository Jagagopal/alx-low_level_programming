#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: name to be printed, a char
 * @f: pointer to function
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (name  == NULL || f == NULL)
		return;
	f(name);
}
