#include "main.h"
#include <ctype.h>

/**
 *_isalpha - indique si lettre est minuscule ou majuscule
 * @C: la lettre à vérifier
 *
 * Return: 1 si c est minuscule, 0 si c est majuscule
 */

int _isalpha(int C)
{
	if (C >= 'a' && C <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
