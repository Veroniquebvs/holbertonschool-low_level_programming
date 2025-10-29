#include "main.h"
#include <stdio.h>

/**
 * puts_half - affiche la seconde moitié d'une chaîne
 * @str: chaîne à afficher
 *
 */

void puts_half(char *str)
{
	int i;

	int a, lengh = 0, middle;

	for (a = 0; str[a] != '\0'; a++)
	{
		lengh++;
	}

	if (lengh % 2 == 0)
		middle = lengh / 2;
	else
		middle = (lengh - 1) / 2 + 1;

	for (i = middle; i < lengh; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
