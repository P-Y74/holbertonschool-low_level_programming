#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, nextNumber = 0, sum = 2;

	while (nextNumber <= 4000000)
	{
		nextNumber = num1 + num2;

		if (nextNumber % 2 == 0)
		{
			sum += nextNumber;
		}

		num1 = num2;
		num2 = nextNumber;
	}
	printf("%ld\n", sum);
	return (0);
}
