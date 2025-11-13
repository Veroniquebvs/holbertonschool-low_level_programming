#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the structure dog
 * @d: structure to prints
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)");
		return;
	}

	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == 0)
	{
		printf("Age: (nil)");
		return;
	}

	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
		return;
	}

	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
