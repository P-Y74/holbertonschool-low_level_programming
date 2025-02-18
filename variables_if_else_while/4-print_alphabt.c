#include <stdio.h>

/**
 * main - Print alphabet in lower except q and e with putchar
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}
		putchar(a++);
	}
	putchar('\n');

	return (0);
}
