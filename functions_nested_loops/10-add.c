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
	_putchar(somme / 10);
	_putchar(somme % 10);
	return (somme);
}
