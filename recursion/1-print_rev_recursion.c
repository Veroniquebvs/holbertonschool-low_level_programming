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
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
