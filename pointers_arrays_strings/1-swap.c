#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: First value to swap
 * @b: Second value to swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
