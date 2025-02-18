#include <stdio.h>

/**
 * main - Print alphabet in lowercase with putchar
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
		putchar(a++);
	putchar('\n');

	return (0);
}
