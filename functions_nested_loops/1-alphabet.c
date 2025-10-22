#include "main.h"

/**
 * print_alphabet - Affiche les lettres de l'alphabet en minuscules
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
