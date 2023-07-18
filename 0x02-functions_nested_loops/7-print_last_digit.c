#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @a: Parameter checker
 * Return: returns calue of b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

		if (a < 0)
		{
			b = -b;
			_putchar(b + '0');
		}
			return (b);
}
