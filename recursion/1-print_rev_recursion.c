#include "main.h"
#include <stdio.h>

/**
 * *_print_rev_recursion - affiche une chaîne de caractère inversée
 * @s: chaîne à copier
 *
 *Return: ne retourne rien
 */

void _print_rev_recursion(char *s)
{
	int a = 0;
	int i = 0;
	int length = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		_print_rev_recursion(s - 1);
	}

	if (i == 0)
	{
		_putchar('\n');
		return;
	}

}
