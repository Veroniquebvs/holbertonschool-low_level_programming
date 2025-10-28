#include "main.h"

/**
 * print_triangle - Affiche le charactère '#'
 * @n: Le nombre de fois où le charactère '#' sera affiché en triangle
 *
 */

void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0 ; i < n ; i++)
		{
		for (j = 0 ; j < (n - 1 - i) ; j++)
		{
			_putchar(' ');
		}
		for (j = 0 ; j < (i + 1) ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}

	}
}
