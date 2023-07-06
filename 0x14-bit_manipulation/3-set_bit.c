#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1, at a given index.
 * @n: Pointer to the number whose bit value is to be set.
 * @index: The index of bit to be set.
 * Return: 1 if it works, or -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = *n | (1 << index);
	return (1);
}
