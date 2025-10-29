#include "main.h"
#include <stdio.h>

/**
 * _puts - affiche une chaîne
 * @str: chaîne à afficher
 *
 *Return: la longueur de la chaine
 */

void _puts(char *str)
{
	int i = 0;

	int a, lengh = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		lengh++;
	}

	while (i <= lengh)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
