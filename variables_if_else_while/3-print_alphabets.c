#include <stdio.h>

/**
 * main - point d'entrée du programme
 * Description : affiche les lettres de l'alphabet
 * Return: 0 si le programme s'exécute correctement
 */

int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}

	putchar('\n');
	return (0);
}
