#include "main.h"
#include <stdio.h>

/**
 * *_strlen_recursion - mesure la longueur d'une chaîne
 * @s: chaîne à mesurer
 *
 *Return: la longueur de la chaîne
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);

}
