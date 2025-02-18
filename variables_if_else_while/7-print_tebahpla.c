#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse with putchar
 *
 * Return: 0
 */
int main(void)
{
	char reverseAlphabet = 'z';

	while (reverseAlphabet > 'a')
		putchar(reverseAlphabet--);
	putchar('\n');

	return (0);
}
