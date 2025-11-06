#include <stdio.h>
#include <stdlib.h>

/**
* main - point d'entrée du programme
* @argc: nombre total d'arguments
* @argv: tableau contenant les arguments
* Return: 0 si le programme s'exécute correctement
*/
int main(int argc, char *argv[])
{
	int result;
	int nombre1;
	int nombre2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		nombre1 = atoi(argv[1]);
		nombre2 = atoi(argv[2]);
		result =  nombre1 * nombre2;
		printf("%d\n", result);
	}

	return (0);
}
