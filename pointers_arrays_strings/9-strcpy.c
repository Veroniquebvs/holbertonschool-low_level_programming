#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copie une chaine de caractère
 * @dest: pointeur d'une chaîne de caractère
 * @src: pointeur recevant copie d'une chaîne de caractère
 *
 *Return: la longueur de la chaine
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
