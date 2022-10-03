#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int **grid, muhammad, ibrahim;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (muhammad = 0; muhammad < height; muhammad++)
	{
		grid[muhammad] = malloc(width * sizeof(int));
		if (grid[muhammad] == NULL)
		{
			while (muhammad >= 0)
			{
				free(grid[muhammad]);
				muhammad--;
			}
			free(grid);
			return (NULL);
		}
		for (ibrahim = 0; ibrahim < width; ibrahim++)
			grid[muhammad][ibrahim] = 0;
	}
	return (grid);
}
