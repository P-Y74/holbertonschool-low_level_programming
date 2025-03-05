#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recurse(n, 0));
}

/**
 *_sqrt_recurse - Secondary function to calculate square root recursively
 * @n: The number to find the square root of
 * @x: The current guess for the square root
 *
 * Return: The square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recurse(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recurse(n, x + 1));
}
