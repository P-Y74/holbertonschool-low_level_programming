#include <stdio.h>

/**
 * main - Print alphabet in lowercase and uppercase with putchar
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a', A = 'A';
		while (a <= 'z')
		{
			putchar(a++);
		}
		while (A <= 'Z')
		{
			putchar(A++);
		}
		putchar('\n');

	return (0);
}
