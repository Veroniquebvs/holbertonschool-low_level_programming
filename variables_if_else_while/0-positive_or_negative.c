#include <stdlib.h>
#include <time.h>
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
printf("%d \n", n);

if (n > 0)
{
printf("is positive \n");
}
else if (n < 0)
{
printf("is negative \n");
}
else
{
printf("is zero \n");
}
return (0);
}
