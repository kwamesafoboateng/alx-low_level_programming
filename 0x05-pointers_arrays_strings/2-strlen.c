#include "main.h"

/**
 * _strlen - functions that returns a length of a string
 * @s: strings to be counted
 * return: return length of the string
 */

int _strlen(char *s)
{
	int i;
	int count_string = 0;

	for (i = 0; s[i] != '\0' ; i++)
		count_string++;
	return (count_string);
}
