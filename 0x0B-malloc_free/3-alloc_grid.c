#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - allocates a two dimensional array
 * @width: the table width
 * @height: the table height
 *
 * Return: pointer to the table
 */
int **alloc_grid(int width, int height)
{
	int **muhammad, **ibrahim;

	if (width <= 0 || height <= 0)
		return (NULL);
	ibrahim = muhammad = malloc(sizeof(int *) * height);
	if (!i)
		return (NULL);
	while (height--)
	{
		int *moh = malloc(sizeof(int) * width);
		int i = width;

		if (!moh)
		{
			i = 0;
			while (ret + i != rows)
				free(ibrahim[i++]);
			free(ibrahim);
			return (NULL);
		}
		while (i--)
			*moh++ = 0;
		*muhammad++ = moh - width;
	}
	return (ibrahim);
