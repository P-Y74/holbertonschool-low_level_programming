#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
		printf("%d", digit++);
	putchar('\n');

	return (0);
}
