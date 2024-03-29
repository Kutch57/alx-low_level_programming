#include "main.h"

/**
 * binary_to_uint - it converts a binary num to an unsigned int
 * @b: Pointer to a string of 0 or 1 char
 * Return: the converted number,
 * or 0 if there is one or more chars in string that is not 0 or 1,
 * or b is 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == 0)
	{
	return (0);
	}

	for (; *b; b++)
	{
	if (*b != '0' && *b != '1')
	{
	return (0);
	}

	num <<= 1;
	if (*b == '1')
	{
		num |= 1;
	}
	}

	return (num);
}
