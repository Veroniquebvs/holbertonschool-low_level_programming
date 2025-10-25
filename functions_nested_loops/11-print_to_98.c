#include <stdio.h>

/**
 * print_to_98 - affiche les nombre jusqu'à 98
 * @n: nombre de départ
 *
 * Return: résultat
 */
void print_to_98(int n)

{ int a = n;

	if (a < 98)
    {
		while (a < 98)
		{
			printf("%d, ", a);
			a++;
		}
    }
	else if (a > 98)
	{
		while (a > 98)
		{
			printf("%d, ", a);
			a--;
		}
	}

	printf("98\n");
}
