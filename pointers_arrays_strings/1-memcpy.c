#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copie n octets de la zone mémoire
 * @dest: tampon recevant les données
 * @src: tampon contenant les données à copier
 * @n: taille du tampon en octets
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
