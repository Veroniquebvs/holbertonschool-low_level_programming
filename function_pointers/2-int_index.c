#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - search for a integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer a function
 *
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	if (i == 0)
	{
		return (-1);
	}

	return (-1);

}
