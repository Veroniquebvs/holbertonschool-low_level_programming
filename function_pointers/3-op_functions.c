#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition de deux entier
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: résultat de l'opération
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustraction de deux entier
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: résultat de l'opération
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication de deux entier
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: résultat de l'opération
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division du premier entier par le deuxième entier
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: résultat de l'opération
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo du premier entier par le deuxième entier
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: reste de la division
 */

int op_mod(int a, int b)
{
	return (a % b);
}

