#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - point d'entrée du programme
* @argc: nombre total d'arguments
* @argv: tableau contenant les arguments
* Return: 0 si le programme s'exécute correctement
*/
int main(int argc, char *argv[])
{
	int i, j;
	int entier;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
			printf("Error\n");
			return (1);
			}
		}

		entier = atoi(argv[i]);
		sum = sum + entier;

	}
	printf("%d\n", sum);
	return (0);
}
