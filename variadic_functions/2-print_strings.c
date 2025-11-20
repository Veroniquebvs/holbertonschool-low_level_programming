#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints a string
 *@separator: separator
 *@n: nombre
 *
 * Return: numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i = 0;

	va_start(ap, n);

	while (i < n)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		printf("%s", str);

		if (separator != NULL && i < n - 1)
		printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(ap);
}
