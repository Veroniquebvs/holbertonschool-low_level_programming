#include "main.h"

/**
 * print_alphabet_x10 - Affiche les lettres de l'alphabet en minuscules 10 fois
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)


	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
		i++;

	}

}
