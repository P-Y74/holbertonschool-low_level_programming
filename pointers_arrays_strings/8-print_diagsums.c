#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: Pointer to the first element of a square matrix (stored linearly)
 * @size: Size of the square matrix (number of rows and columns)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int firstDiag = 0, secondDiag = 0;

	for (i = 0; i < size; i++)
	{

		firstDiag += *(a + i * size + i);
		secondDiag += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", firstDiag, secondDiag);
}
