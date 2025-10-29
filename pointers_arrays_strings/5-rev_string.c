#include "main.h"
#include <stdio.h>

/**
 * rev_string - affiche une chaîne à l'envers
 * @s: chaîne à afficher
 *
 *
 */

void rev_string(char *s)
{
	int i, a, temp, lengh = 0;

		for (i = 0; s[i] != '\0'; i++)
	{
		lengh++;
	}

	for (a = 0; a < lengh / 2; a++)
	{
		temp = s[a];
		s[a] = s[lengh - 1 - a];
		s[lengh - 1 - a] = temp;
	}
}
