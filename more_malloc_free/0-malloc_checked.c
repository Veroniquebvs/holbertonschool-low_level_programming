#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire
 * @b: nombre d'octet à allouer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *allocmem;

	allocmem = malloc(b * sizeof(unsigned int));

	if (allocmem == NULL)
	{
		return (NULL);

		exit(98);
	}

	return (allocmem);
}
