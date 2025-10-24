#include "main.h"
#include <ctype.h>

/**
 *_isalpha - indique si lettre est minuscule ou majuscule
 * @c: la lettre à vérifier
 *
 * Return: 1 si c est minuscule, 0 si c est majuscule
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
