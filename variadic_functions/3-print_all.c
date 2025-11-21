#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* p_char - prints a char
* @ap: argument list
*/
void p_char(va_list ap) { printf("%c", va_arg(ap, int)); }

/**
* p_int - prints an int
* @ap: argument list
*/
void p_int(va_list ap) { printf("%d", va_arg(ap, int)); }

/**
* p_float - prints a float
* @ap: argument list
*/
void p_float(va_list ap) { printf("%f", va_arg(ap, double)); }

/**
* p_string - prints a string
* @ap: argument list
*/
void p_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	printf("%s", s ? s : "(nil)");
}

/**
 * print_all - prints all arguments
 *@format: separator
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	void (*fun[4])(va_list) = {p_char, p_int, p_float, p_string};
	char t[4] = {'c', 'i', 'f', 's'}, *sep = "";
	va_list ap;
	int i = 0, j;

	va_start(ap, format);

	if (format == NULL || format[0] == '\0')
	{
		printf("\n");
		va_end(ap);
		return;
	}

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == t[j])
			{
				printf("%s", sep);
				fun[j](ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
