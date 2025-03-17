#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the calculator program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or error codes (98, 99) on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, total;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	total = operator(num1, num2);
	printf("%d\n", total);

	return (0);
}
