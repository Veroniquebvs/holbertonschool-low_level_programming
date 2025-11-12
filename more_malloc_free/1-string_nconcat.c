#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatène deux chaînes de caractères
 * @s1: chaîne de destinations
 * @s2: chaîne à concatener
 * @n : taille de la mémoire à allouer
 *
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *newstr;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	;

	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	if (n >= len2)
		n = len2;

	newstr = malloc(sizeof(char) * (len1 + n + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		newstr[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{

		newstr[i + j] = s2[j];
	}

	newstr[i + j] = '\0';

	return (newstr);
}
