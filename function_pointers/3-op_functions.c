#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First number to add
 * @b: Second number to add
 *
 * Return: The sum of a and b (a + b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: Number from which b will be subtracted
 * @b: Number to subtract from a
 *
 * Return: The difference between a and b (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First number to multiply
 * @b: Second number to multiply
 *
 * Return: The product of a and b (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: The result of a divided by b (a / b)
 *         If b == 0, prints "Error" and exits with status 100
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of a by b
 * @a: Dividend
 * @b: Divisor
 *
 * Return: The remainder of a divided by b (a % b)
 *         If b == 0, prints "Error" and exits with status 100
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
