#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Adds all numbers passed as arguments.
 * @n: The number of arguments.
 *
 * Return: The sum of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list argsNumber;

	va_start(argsNumber, n);

	if (n == 0)
	{
		va_end(argsNumber);
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argsNumber, int);
	}

	va_end(argsNumber);
	return (sum);
}
