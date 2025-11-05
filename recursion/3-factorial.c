#include "main.h"
#include <stdio.h>

/**
 * factorial - calcule factorielle de n
 * @n: nombre à calculer
 *
 *Return: résultat de factorielle de n
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
	return (1);
	}

	else if (n < 0)
	{
	return (-1);
	}

	else
	return (n * factorial(n - 1));

}
