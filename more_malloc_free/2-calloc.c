#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - alloue de la mémoire
 * @nmemb: nombre d'éléments dans un tableau
 * @size: taille en octet du tableau
 *
 * Return: pointeur
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *newarray;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newarray = malloc(nmemb * size);

	if (newarray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i != '\0'; i++)
		newarray[i] = 0;

	return (newarray);
}
