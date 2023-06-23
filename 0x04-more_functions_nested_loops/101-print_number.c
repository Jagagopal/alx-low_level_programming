#include "main.h"
#include <stdio.h>
/**
 * print_number - print an integer
 * @n: This is an integer.
 */
void print_number(int n)
{
	int n1;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	putchar((n1 % 10) + '0');
}
