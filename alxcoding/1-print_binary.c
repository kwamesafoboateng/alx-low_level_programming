#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
#include <stdio.h>

void print_binary(unsigned long int n)
{
	if (n >> 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}
}
