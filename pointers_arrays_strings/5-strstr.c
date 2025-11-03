#include "main.h"
#include <stdio.h>

/**
 * *_strstr - recherche la première occurence
 * d'une chaîne dans une autre chaîne
 * @haystack: chaîne de caratère dans laquelle faire la recherche
 * @needle: sous chaîne à rechercher
 *
 *Return: un pointeur vers la première occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			break;
		}

		if (needle[j] == '\0')
		return (&haystack[i]);
	}

	return (NULL);

}
