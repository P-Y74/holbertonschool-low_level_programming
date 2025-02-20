#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: value to compare
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;

	putchar(n + '0');
	return (n);
}
