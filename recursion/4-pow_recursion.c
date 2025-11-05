#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - élève une valeur à la puissance donnée
 * @x: la valeur a élever
 * @y: la puissance
 *
 *Return: résultat
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}

	else if (y == 0)
	{
	return (1);
	}

	else
	return (x * _pow_recursion(x, y - 1));

}
