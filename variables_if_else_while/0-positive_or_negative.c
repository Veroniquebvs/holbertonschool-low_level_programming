#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - point d'entrée du programme
* Description : affiche si le nombre est positi ou négatif
* Return: 0 si le programme s'execute correctement
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive \n");
}
else if (n < 0)
{
printf("%d is negative \n");
}
else
{
printf("%d is zero \n");
}
return (0);
}
