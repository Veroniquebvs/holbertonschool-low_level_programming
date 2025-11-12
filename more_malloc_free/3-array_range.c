#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - crée un tableau d'entier
 * @min: la plus petite valeur
 * @max: la plus grande valeur
 *
 * Return: pointeur
 */

int *array_range(int min, int max)
{
	int *newarray;
	int nbvalue;
	int i;

	if (min > max)
		return (NULL);

	nbvalue = max - min + 1;

	newarray = malloc(sizeof(int) * nbvalue);

	if (newarray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nbvalue; i++)
		newarray[i] = min + i;

	return (newarray);
}
