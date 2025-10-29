#include "main.h"
#include <stdio.h>

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: chaîne à afficher
 *
 */

void puts2(char *str)
{
	int i = 0;

	int a, lengh = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		lengh++;
	}

	for (i = 0; i < lengh; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
