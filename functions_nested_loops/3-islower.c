#include "main.h"
#include <ctype.h>

/**
 *_islower - indique si caractère est minuscule
 * @c: la lettre à vérifier
 *
 * Return: 1 si c est minuscule, 0 si c est majuscule
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
