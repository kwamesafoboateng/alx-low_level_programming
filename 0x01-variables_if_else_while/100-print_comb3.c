#include <stdio.h>
/**
<<<<<<< HEAD
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
=======
 * main - Entry point
 * Return: 0
>>>>>>> 739321149a6bfd874a9794b15eb3c06201a34fae
 */
int main(void)
{
	int a, b;

<<<<<<< HEAD
	for (a = 48; n < 58
=======
	for (a = 48; a <= 56; a++)
	{
		for (a = 49; b <= 57; b++)
		{
			if (b > a)
				{
					putchar(a);
					putchar(b);
					if (a != 56 || b != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
return (0);
}
>>>>>>> 739321149a6bfd874a9794b15eb3c06201a34fae
