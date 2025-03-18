#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, numbers;

	va_list argsNumber;

	va_start(argsNumber, n);

	if (n == 0)
	{
		va_end(argsNumber);
		return;
	}

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(argsNumber, unsigned int);
		printf("%d", numbers);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(argsNumber);
}
