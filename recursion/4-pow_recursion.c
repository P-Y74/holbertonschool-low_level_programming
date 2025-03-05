#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Computes x raised to the power of y recursively
 * @x: The base number
 * @y: The exponent to which the base is raised
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
