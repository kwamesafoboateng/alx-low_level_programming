#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipped_bits = 0;

	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
	flipped_bits += (xor & 1);
	xor >>= 1;
	}

	return (flipped_bits);
}
