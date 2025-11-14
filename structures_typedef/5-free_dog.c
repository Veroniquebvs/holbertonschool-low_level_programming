#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libère de la mémoire
 * @d: données de la variable
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
