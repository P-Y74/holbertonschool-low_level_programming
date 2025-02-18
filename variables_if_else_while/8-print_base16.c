#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int number = '0';
	char alphabet = 'a';

	while (number <= '9')
	{
		putchar(number++);
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet++);
	}
	putchar('\n');

	return (0);
}
