#include "main.h"
#include <stdio.h>

/**
 * main - point d'entrée du programme
 * Si multiple de 3 : affiche Fizz
 * Si multiple de 5 : affiche Buzz
 * Si multiple de 3 et 5 : affiche FizzBuzz
 * Return: 0 si le programme s'exécute correctement
 */

int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (i == 100)
		{
			printf("Buzz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");

	return (0);
}
