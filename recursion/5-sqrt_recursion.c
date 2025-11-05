#include "main.h"
#include <stdio.h>

/**
 * _rootsquare - carrée de n
 * @n: valeur à calculer
 * @x: valeur du carré
 *
 *Return: carrée de n
 */

int _rootsquare(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}

	if (x * x > n)
	{
		return (-1);
	}

	else
	return (_rootsquare(n, x + 1));
}

/**
 * _sqrt_recursion - racine carrée de n
 * @n: valeur à calculer
 * @x: valeur du carré
 *
 *Return: racine carrée de n
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	return (_rootsquare(n, 0));

}
