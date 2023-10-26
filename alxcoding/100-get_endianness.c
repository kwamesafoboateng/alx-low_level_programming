#include "main.h"

/**
 * get_endianness - checks for little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	int n = 1;
	char *c = (char *)&n;

	if (*c)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
