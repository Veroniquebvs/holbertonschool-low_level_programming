#include <stdio.h>
/**
* main - point d'entrée du programme
* @argc: nombre total d'arguments
* @argv: tableau contenant les arguments
* Return: 0 si le programme s'exécute correctement
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
