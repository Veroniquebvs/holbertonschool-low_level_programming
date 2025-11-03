#include "main.h"
#include <stdio.h>

/**
 * *_strchr - recherche la première occurrence
 * @s: chaîne de caractère dans laquelle effectuer la recherche
 * @c: le caractère à rechercher
 *
 *Return: dest
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
		if (c == '\0')
		{
			return (&s[i]);
		}

		return (NULL);

}
