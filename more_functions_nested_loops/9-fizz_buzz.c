#include <stdio.h>
#include "main.h"

/**
 * main - Prints the numbers from 1 to 100
 *
 * Return: 0
 */
int main(void)
{
	int numbers;

	for (numbers = 1 ; numbers <= 100 ; numbers++)
	{
		if (numbers % 3 == 0 && numbers % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (numbers % 3 == 0)
		{
			printf("Fizz");
		}
		else if (numbers % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", numbers);
		}
		if (numbers < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
