#include "main.h"
/**
 * print_alphabet_x10 - A program that prints the alphabets 10 times
 * Followed by a new line
 */

void print_alphabet_x10(void)
{
	int alpha;
	int n;

	n = 0;

	while (n < 10)
	{
		alpha = 97;
		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		n++;
	}
}

