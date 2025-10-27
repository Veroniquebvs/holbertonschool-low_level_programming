#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9
 */

void print_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		_putchar(number);
		number++;
	}

	_putchar('\n');
}
