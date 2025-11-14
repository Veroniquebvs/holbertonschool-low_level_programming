#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/** clacule longueur d'une chaîne de caractère */
int _strlen(char *s)
{
	int i, lengh = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lengh++;
	}
	return (lengh);
}

/** copie la chaîne de caractère */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lenname, lenowner;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
		if (d == NULL)
			return (NULL);

	lenname = _strlen(name);

	d->name = malloc(sizeof(char) * (lenname + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	d->age = age;

	lenowner = _strlen(owner);
	d->owner = malloc(sizeof(char) * (lenowner + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	return (d);
}
