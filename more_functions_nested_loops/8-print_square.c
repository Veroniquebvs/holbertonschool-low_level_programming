#include "main.h"
#include <stdio.h>

/**
 * print_square - Affiche le charactère '#'
 * @n: Le nombre de fois où le charactère '#' sera affiché
 *
 */

void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
