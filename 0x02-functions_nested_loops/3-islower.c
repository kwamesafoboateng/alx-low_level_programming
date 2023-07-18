#include "main.h"
/**
 * _islower - Checks for lowercase cxharacter
 * @c: parameter check
 * Return: 1 if succesful 0 if failed
 */

int _islower(int c)
{
	if (c >= 'a' &&c <= 'z')
		return (1);
	else
		return (0);
}
