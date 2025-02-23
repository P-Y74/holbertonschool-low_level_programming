#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int num1 = 0, num2 = 0;

	while (num1 <= 99)
	{
		while (num2 <= 99)
		{
			if (num1 < num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
			}
			if (num1 < 98 || num2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
