#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * cType - Prints a character argument
 * @args: Pointer to the variadic arguments list
 */
void cType(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * iType - Prints an integer argument
 * @args: Pointer to the variadic arguments list
 */
void iType(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * fType - Prints a float argument
 * @args: Pointer to the variadic arguments list
 */
void fType(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * sType - Prints a string argument
 * @args: Pointer to the variadic arguments list
 */
void sType(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints all arguments based on format string
 * @format: A constant string containing format specifiers
 *
 * Description: Accepts a list of arguments of varying types and prints them
 * according to the format string provided. Supported specifiers:
 * 'c' - char, 'i' - int, 'f' - float, 's' - string.
 * Each argument is separated by ", ".
 */
void print_all(const char *const format, ...)
{

	print_type arr[] = {
	    {'c', cType},
	    {'i', iType},
	    {'f', fType},
	    {'s', sType},
	    {'\0', NULL}};

	int i = 0, j;
	char *sep = "";

	va_list args;

	va_start(args, format);

	while (format[i] && format != NULL)
	{
		while (arr[j].type != '\0')
		{
			if (arr[j].type == format[i])
			{
				printf("%s", sep);
				arr[j].print_func(&args);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}

	printf("\n");
	va_end(args);
}
