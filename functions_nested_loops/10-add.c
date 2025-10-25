#include "main.h"

/**
 * add - additionne deux entiers et affiche le résultat avec _putchar
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: la somme des deux entiers
 */

int add(int a, int b)
{
	int somme;

	somme = a + b;

	if (somme < 0)
    {
		_putchar('-');
		somme = -somme;
    }

	if (somme >= 10)
    {
		_putchar((somme / 10) + '0');
    }
	_putchar((somme % 10) + '0');
}
