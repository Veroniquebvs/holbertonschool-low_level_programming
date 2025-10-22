#include <stdio.h>

/**
 * main - point d'entrée du programme
 * Description : affiche les lettres de l'alphabet à l'envers
 * Return: 0 si le programme s'exécute correctement
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
