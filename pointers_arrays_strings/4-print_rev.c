#include "main.h"
#include <stdio.h>

/**
 * print_rev - affiche une chaîne de caractère inversée
 * @s: chaîne de caractère
 *
 *
 */

void print_rev(char *s)
{
	int i = 0;

	int a, lengh = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		lengh++;
	}

	for (i = lengh - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
