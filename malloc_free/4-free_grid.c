#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - libère tableau deux dimensions
 * @grid: tableau à deux dimensions
 * @height : hauteur du tableau
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}

	free(grid);
}
