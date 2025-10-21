#include <stdio.h>

/**
 * main - point d'entrée du programme
 * Description: affiche l'alphabet sauf 'e' et 'q'
 * Return: 0 si le programme s'exécute correctement
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
