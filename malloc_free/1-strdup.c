#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - duplique une chaîne de caratère
 * @str: chaîne de caratère à dupliquer
 *
 * Return: pointeur
 */

char *_strdup(char *str)
{
	int len;
	char *newstr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	newstr = malloc((sizeof(char) * len) + 1);

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}

	newstr[len] = '\0';

	return (newstr);

}
