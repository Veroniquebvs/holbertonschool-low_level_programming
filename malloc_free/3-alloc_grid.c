#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - affiche tableau deux dimensions
 * @width: largeur du tableau
 * @height : hauteur du tableau
 * Return: pointeur
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

		if (grid == NULL)
			return (NULL);

	for (h = 0; h < height; h++)
		{
		grid[h] = malloc(sizeof(int) * width);

			if (grid[h] == NULL)
			return (NULL);
		}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}
