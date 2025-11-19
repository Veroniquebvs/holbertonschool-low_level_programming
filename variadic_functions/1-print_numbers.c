#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints number
 *@separator: separator
 *@n: nombre
 *
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int list_num;
	unsigned int i = 0;

	va_start(ap, n);

	while (i < n)
	{
		list_num = va_arg(ap, unsigned int);

		printf("%d", list_num);

		if (separator != NULL && i < n - 1)
		printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(ap);
}
