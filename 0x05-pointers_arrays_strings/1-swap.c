#include "main.h"

/**
 * swap_int - Swaps the value of integers
 * @a: swaps the value of b
 * @b: swaps the value of a
 * return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
