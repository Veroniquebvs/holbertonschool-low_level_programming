#include "main.h"
#include <stdio.h>

/**
 * *_memset - remplit les n premiers octets
 * @s: adresse du bloc mémoire à initialiser
 * @b: valeur à utiliser
 * @n: nombre d'octet à utiliser
 *
 *Return: la longueur de la chaine
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
