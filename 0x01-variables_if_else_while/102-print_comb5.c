#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a, b;
	{
		for (a = 0; a < 100; a++)
		{
			for (b = 0; b < 100; b++)
			{
				if (a < b)
				{
					putchar((a / 10) + 'a');
					putchar((a % 10) + 'a');
					putchar(' ');
					putchar((b / 10) + 'a');
					putchar((a % 10) + 'a');
					if (a != 98 || b != 99)
					{
						putchar(',');
						putchar(' ');
						putchar('\n');
					}
				}
			}
		}
	}
		return (0);
}
