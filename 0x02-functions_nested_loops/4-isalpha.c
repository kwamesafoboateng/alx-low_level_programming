#include "main.h"
/**
 * _isalpha - A program that checks for alphabetic characters
 * @c: Checks character
 * Return: 1 if successful and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
