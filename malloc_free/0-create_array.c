#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array
 * @c: characters
 * @size: the size of the array
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
