#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * ap = Muhammad, i = Ibrahim, string = Bello (Declaration).
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list Muhammad;
	unsigned int Ibrahim = 0;
	char *Bello;

	va_start(Muhammad, n);
	for (; Ibrahim < n; Ibrahim++)
	{
		Bello = va_arg(Muhammad, char*);
		if (Bello == NULL)
			printf("(nil)");
		else
			printf("%s", Bello);
		if (separator == NULL)
			continue;
		if (Ibrahim < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(Muhammad);
}
