#include <stdio.h>

/**
 * main - point d'entrée du programme
 * Description: affiche nombre à un chiffre
 * Return: 0 si le programme s'exécute correctement
 */
int main(void)
{
	int  x = 0;

	while (x < 10)
	{
		putchar (x + '0');
		x++;
	}
	putchar ('\n');

	return (0);
}
