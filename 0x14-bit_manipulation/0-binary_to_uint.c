#include "main.h"

/**
 * binary_to_uint - A function that converts binary number
 * to an unsigned integer
 * @b: A pointer to a binary string
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int Muhammad;
	unsigned int Ibrahim = 0;

	if (!b)
		return (0);

	for (Muhammad = 0; b[Muhammad]; Muhammad++)
	{
		if (b[Muhammad] < '0' || b[Muhammad] > '1')
			return (0);
		Ibrahim = 2 * Ibrahim + (b[Muhammad] - '0');
	}

	return (Ibrahim);
}
