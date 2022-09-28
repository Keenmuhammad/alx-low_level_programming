#include "main.h"

/**
 * _pow_recursion - It returns the value of x raised to the power y.
 * @x: the base
 * @y: the exponent
 * Return: The result of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
