#include "main.h"
#include <stdio.h>

/**
 * print_line - Affiche le charactère _
 * @n : le nombre de fois où le charactère sera affiché
 */

void print_line(int n)
{
	int i;

		if (n <= 0)
		{
			_putchar('\n');
		}

		else
		{
		for (i = 0; i <= n; i++)
			{
			_putchar('_');
			}
		}
		_putchar('\n');
}
