/*
 * File: 5-sign.c
 * Auth: Muhammad Ibrahim Bello
 */

#include "main.h"
/**
 * print_sign - This program determins wether
 * an integer is positive, negative or zero
 * @n: parameter.
 * Return 1 if positive, 0 if negative
 * -1 if negative, '/' if not a digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return(0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else 
	{
		_putchar('-');
		return ('/');
	}
}


