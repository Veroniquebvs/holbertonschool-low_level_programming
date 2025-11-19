#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - point d'entrée du programme
 * @argc: nombre total d'argument passés au programme
 * @argv: tableau contenant les arguments
 *
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
	printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));
	return (0);
}

