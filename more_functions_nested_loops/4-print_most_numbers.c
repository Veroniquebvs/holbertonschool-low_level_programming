#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9
 */

void print_most_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		if (number != '2' && number != '4')
		{
		_putchar(number);
		}
		number++;
	}

	_putchar('\n');
}
