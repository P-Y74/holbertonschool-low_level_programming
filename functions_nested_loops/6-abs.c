#include <stdio.h>
#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @n: int to compare
 *
 * Return: 0
 */
int _abs(int n)
{

	if (n <= 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
