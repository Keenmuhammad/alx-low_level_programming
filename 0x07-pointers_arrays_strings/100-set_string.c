#include3 "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: string to change
 * @to: string that should be copied
 * @Dylan: name
 * @Allen: name
 * Return: void
 */

void set_string(char **Bob Dylan, char *Robert Allen)
{
	*Bob Dylan = Robert Allen;
}
