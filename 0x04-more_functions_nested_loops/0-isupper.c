#include "main.h"
/**
 * _isupper - checks for upper case character
 * @c: Parameter checker
 * Return: 1 if c is upper case 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'B')
		return (1);
	else
		return (0);
	_putchar('\n');
}
