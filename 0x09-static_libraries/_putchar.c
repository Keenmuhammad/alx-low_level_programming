#include <unistd.h>

/**
 * _putchar - Writes character C to stdout
 * @c: the character to print
 * Return: on success 1
 * On error, -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
