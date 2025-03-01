#include <stdio.h>
#include "main.h"

/**
 * _atoi - Convert string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int sign = 1;
	int foundDigit = 0; /* Flag to check if a number has started */

	while (s[i] != '\0')
	{
		/* Handle signs only before encountering a number */
		if (s[i] == '-' && foundDigit == 0)
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			foundDigit = 1;
			/* Check for integer overflow */
			if (num > 214748364 ||
			    (num == 214748364 && (s[i] - '0') > 7))
			{
				if (sign == 1)
				{
					return (2147483647);
				}
				else
				{
					return (-2147483648);
				}
			}
			num = num * 10 + (s[i] - '0');
		}
		/* Stop when a number has been found and a non-digit is encountered */
		else if (foundDigit)
		{
			break;
		}
		i++;
	}
	return (num * sign);
}
