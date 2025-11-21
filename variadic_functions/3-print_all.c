#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints all arguments
 *@format: separator
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0;

	va_start(ap, format);

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	else
	{
		while (format[i] != '\0')
		{
			printf(", ");
			
			if (format[i] == 'c')
				printf("%c", va_arg(ap, int));

			else if (format[i] == 'i')
				printf("%d", va_arg(ap, int));

			else if (format[i] == 'f')
				printf("%f", va_arg(ap, double));

			else if (format[i] == 's')
			{
				str = va_arg(ap, char*);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				printf("%s", str);
			}

			i++;
		}

	}

	printf("\n");

	va_end(ap);
}
