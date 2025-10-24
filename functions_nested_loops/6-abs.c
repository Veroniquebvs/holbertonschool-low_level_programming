#include "main.h"
#include <ctype.h>

/**
 *_abs - indique la valeur absolue d'un entier
 * @int: entier à vérifier
 *
 * Return: valeur absolue
 */

int _abs(int a)

{
	if(a < 0) (a = -a);
	return a;
}
