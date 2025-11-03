#include "main.h"
#include <stdio.h>

/**
 * *_strspn - renvoie la longueur de la plus grande sous chaîne
 * @s: chaîne à utiliser pour la recherche
 * @accept: liste des caractères acceptés
 *
 *Return: longueur de la plus grande sous chaîne
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		/* Si le caractère n'est pas dans accept, on s'arrête */
		if (!found)
		return (i);
	}

    /* Tous les caractères de s étaient dans accept */
	return (i);

}
