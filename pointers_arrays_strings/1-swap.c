#include "main.h"
#include <stdio.h>

/**
 * swap_int - change la valeur de a et b
 * @a: Le nombre à échanger
 * @b: Le nombre à échanger
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
