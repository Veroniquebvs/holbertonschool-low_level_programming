#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - ajoute à une chaîne le contenu d'une autre
 * @s1: chaîne de caratère destinataire
 * @s2: chaîne de caractère à concaténer
 * Return: pointeur
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int n;
	int i;
	char *newstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	;

	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	newstr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (n = 0; s1[n] != '\0'; n++)
	{
		newstr[n] = s1[n];
	}

	for (i = 0; s2[i] != '\0'; i++, n++)
	{
		newstr[n] = s2[i];
	}

	newstr[n] = '\0';

	return (newstr);
}
