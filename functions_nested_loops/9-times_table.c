#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 table
 *
 * Return: void
 */
void times_table(void)
{
	int num1 = 0, num2 = 0, sum = 0;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			sum = num1 * num2;
			if (num2 != 0 && sum < 10)
			{
				_putchar(' ');
			}
		        if (sum >= 10)
			{
				_putchar((sum / 10) + '0');
			}
			_putchar((sum % 10) + '0');
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num2++;
		}
		num2 = 0;
		num1++;
		_putchar('\n');
	}
}
