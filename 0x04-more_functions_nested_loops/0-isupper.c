#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Parameter checker
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 'A' && c <= 'B')
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
