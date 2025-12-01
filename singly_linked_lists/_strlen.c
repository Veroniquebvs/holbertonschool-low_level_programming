#include "lists.h"
#include <stdio.h>

/**
 * _strlen - renvoie la longueur d'une chaine
 * @s: Le nombre à échanger
 *
 *Return: la longueur de la chaine
 */

int _strlen(const char *s)
{
	int i, lengh = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lengh++;
	}

	return (lengh);
}
