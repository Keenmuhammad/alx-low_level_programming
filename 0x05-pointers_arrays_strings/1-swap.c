#include "main.h"
/**
 * swap_int - a function that swaps the value of two integers
 * @i: integer pointer
 * @j: integer ponter
 * Return: Nothing
 */
void swap_int(int *i, int *j)
{
	int aux;

	aux = *i;
	*i = *j;
	*j = aux;
}
