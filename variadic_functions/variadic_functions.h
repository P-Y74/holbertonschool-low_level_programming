#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

/**
 * struct print_type - Struct to map format specifiers to functions
 * @type: The format specifier character (c, i, f, s)
 * @print_func: Pointer to the function that handles printing of the type
 *
 * Description: This struct allows associating a format specifier
 * with the corresponding function that prints the argument of that type.
 */
typedef struct print_type
{
	char type;
	void (*print_func)(va_list *);
} print_type;

#endif
