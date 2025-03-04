#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: Pointer to a 2D array of 8x8 characters representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
