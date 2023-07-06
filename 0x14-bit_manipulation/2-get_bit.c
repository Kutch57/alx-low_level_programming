#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specific index.
 * @n: The num whose bit value should be gotten.
 * @index: THe index of the bit to get the value of.
 * Return: The vaule of a bit at a given index,
 *	or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
