#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int Muhammad = 1;
	char *Ibrahim = (char *)&Muhammad;

	if (*Ibrahim)
		return (1);
	return (0);
}
