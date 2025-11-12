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

	allocmem = malloc(sizeof(b));

	if (allocmem == NULL)
	{
		exit(98);
	}

	return (allocmem);
}
