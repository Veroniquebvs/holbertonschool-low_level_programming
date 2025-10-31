#include "main.h"
#include <stdio.h>

/**
 * *_strcmp - compare deux chaîne de caractères
 * @s1: première chaîne à comparer
 * @s2: seconde chaîne à comparer
 *
 *
 *Return: résultat
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
