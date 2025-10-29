#include "main.h"
#include <stdio.h>

/**
 * print_array - renvoie les éléments d'un tableau
 * @n: éléments du tableau à afficher
 * @a: le tableau
 *
 *Return: la longueur de la chaine
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("/n");

}
