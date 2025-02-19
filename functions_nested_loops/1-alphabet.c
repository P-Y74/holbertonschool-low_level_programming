#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
		_putchar(alphabet++);
	_putchar('\n');
}
