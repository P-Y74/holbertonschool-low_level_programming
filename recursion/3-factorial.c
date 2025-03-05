#include <stdio.h>
#include "main.h"

/**
 * factorial - Computes the factorial of a given number recursively
 * @n: The number for which the factorial is calculated
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
