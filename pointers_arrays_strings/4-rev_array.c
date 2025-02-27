#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integer
 * @a: Tha array
 * @n: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int index = 0;
	int reverse = n - 1;
	int temp;

	while (index < reverse)
	{
		temp = a[index];
		a[index] = a[reverse];
		a[reverse] = temp;

		index++;
		reverse--;
	}
}
