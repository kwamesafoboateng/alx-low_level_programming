#include "main.h"
/**
 * clear_bit - Clears the value of a bit at a given index.
 * @n: A pointer to the unsigned long integer
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n &= ~(1 << index);
	return (1);
}
