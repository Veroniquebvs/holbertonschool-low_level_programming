#include "main.h"
#include <ctype.h>

/**
 *_isupper - indique si lettre est minuscule ou majuscule
 * @c: la lettre à vérifier
 *
 * Return: 1 si c est majuscule, 0 si c est minuscule
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
