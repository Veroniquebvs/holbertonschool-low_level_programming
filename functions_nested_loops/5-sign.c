#include "main.h"
#include <ctype.h>

/**
 *print_sign - indique si chiffre est negatif ou positif
 * @n: la lettre à vérifier
 *
 * Return: 1 si n est positif, 0 si égal 0, -1 si n est négatif
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
