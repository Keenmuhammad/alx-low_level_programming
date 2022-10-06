#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - A function that creates an array of integers
 * @min: minimum number to start
 * @max: maximum number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *muhammad;
	int ibrahim, i;

	if (min > max)
		return (NULL);

	ibrahim = max - min;
	muhammad = malloc((ibrahim + 1) * sizeof(int));
	if (muhammad == NULL)
		return (NULL);

	for (i = 0; i <= ibrahim; i++)
		muhammad[i] = min++;

	return (muhammad);
}
