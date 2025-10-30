#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatène deux chaîne de caractères
 * @dest: chaîne destinataire
 * @src: chaîne source
 *
 *Return: pointeur vers dest
 */

char *_strcat(char *dest, char *src)
{
	int n, o;

	for (n = 0; dest[n] != '\0'; n++)

	for (o = 0; src[o] != '\0'; o++, n++)
	{
		dest[n] = src[o];
	}

	dest[n] = '\0';

	return (dest);
}


