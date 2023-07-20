#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: Parameter checker
 * Return: Void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		_putchar('_');
		_putchar('\n');
	}
}
