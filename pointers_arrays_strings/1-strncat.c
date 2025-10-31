#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatène deux chaîne de caractères
 * @dest: chaîne destinataire
 * @src: chaîne source
 * @n: nombre maximum de caractères à copier
 *
 *Return: pointeur vers dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length = 0;

	for (length = 0; dest[length] != '\0'; length++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}

	dest[length + i] = '\0';

	return (dest);
}

