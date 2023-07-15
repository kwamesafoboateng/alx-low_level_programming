#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase and uppercase
 * Return: Always 0 (means code is successful)
 */
int main(void)
{
	char a = 'a';

	char b = 'A';

	while
		(a <= 'z')
		{
			putchar(a);
			a++;
		}
	while
		(b <= 'Z')
		{
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
