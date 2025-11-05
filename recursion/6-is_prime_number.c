#include "main.h"
#include <stdio.h>

/**
 * _verif_nb_premier - verifie si le nombre est premier
 * @n: valeur à vérifier
 * @x: diviseur
 *
 *Return: 1 si nombre est premier sinon return 0
 */

int _verif_nb_premier(int n, int x)
{
	if (x * x > n)
	{
		return (1);
	}

	if (n % x == 0)
	{
		return (0);
	}

	else
	return (_verif_nb_premier(n, x + 1));
}

/**
 * is_prime_number - affiche si nombre premier
 * @n: valeur à vérifier
 *
 *Return: 1 si nombre est premier
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	return (_verif_nb_premier(n, 2));

}
