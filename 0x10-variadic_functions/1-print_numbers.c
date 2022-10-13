#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 * (Muhammad = i, Ibrahim = nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int Muhammad = 0;
	int Ibrahim;

	va_start(ap, n);
	for (; Muhammad < n; Muhammad++)
	{
		Ibrahim = va_arg(ap, int);
		printf("%d", Ibrahim);
		if (separator == NULL)
			continue;
		if (Muhammad < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
