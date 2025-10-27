#include "main.h"
#include <ctype.h>

/**
 *_isdigit - indique si chiffre
 * @c: la lettre à vérifier
 *
 * Return: 1 si c est un chiffre, 0 si c est autre chose
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
