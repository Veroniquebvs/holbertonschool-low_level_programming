#include "main.h"
#include <stdio.h>

/**
 * reverse_array - inverse le contenu d'un tableau d'entiers
 * @a: le tableau
 * @n: les éléments à inverser
 *
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

