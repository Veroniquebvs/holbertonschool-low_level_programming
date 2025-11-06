#include <stdio.h>
/**
* main - point d'entrée du programme
* @argc: nombre total d'arguments
* @argv: tableau contenant les arguments
* Return: 0 si le programme s'exécute correctement
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int result;

	result = argc - 1;
	printf("%d\n", result);
	return (0);
}
