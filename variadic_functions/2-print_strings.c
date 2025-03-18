#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 *
 * Description: If separator is NULL, it is not printed.
 *              If a string is NULL, prints (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list argsNumber;

	va_start(argsNumber, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argsNumber, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(argsNumber);
}
