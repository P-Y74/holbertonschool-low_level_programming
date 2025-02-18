#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * with putchar
 *
 * Return: 0
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit++);
	}
	putchar('\n');

	return (0);
}
