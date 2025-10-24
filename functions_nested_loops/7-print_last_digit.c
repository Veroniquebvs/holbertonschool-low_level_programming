#include "main.h"
#include <ctype.h>

/**
 *print_last_digit - indique le dernier chiffre d'un nombre
 * @a: nombre à vérifier
 *
 * Return: dernier chiffre
 */

int print_last_digit(int a)

{
	int y;

	y = a % 10;
	if (y < 0)
	y = -y;

	_putchar(y + '0');

	return (y);
}
