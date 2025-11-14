#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lenname;
	int lenowner;
	int i;
	int j;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

		if (d == NULL)
		{
			return (NULL);
		}

	for (lenname = 0; name[lenname] != '\0'; lenname++)
	;

	d->name = malloc(sizeof(char) * (lenname + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for(i = 0; i < lenname; i++)
	{
		d->name[i] = name[i];
	}

	d->name[i] = '\0';

	(d->age = age);

	for (lenowner = 0; owner[lenowner] != '\0'; lenowner++)
	;

	d->owner = malloc(sizeof(char) * (lenowner + 1));

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for(j = 0; j < lenowner; j++)
	{
		d->owner[j] = owner[j];
	}

	d->owner[j] = '\0';

	return (d);

}
