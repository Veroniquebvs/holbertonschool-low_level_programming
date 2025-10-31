#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - concatène deux chaîne de caractères
 * @dest: chaîne devant recevoir le contenu de l'autre
 * @src: chaîne à copier
 * @n: nombre maximum de caractères à copier
 *
 *Return: pointeur vers dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
