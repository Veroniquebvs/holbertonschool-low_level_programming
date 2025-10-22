#include <stdio.h>

/**
 * main - point d'entrée du programme
 * Description: affiche nombre hexadecimal
 * Return: 0 si le programme s'exécute correctement
 */
int main(void)
{
	char hex[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar (hex[i]);
		i++;
		}
	putchar ('\n');

	return (0);
}
