#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @index: THe index of the bit to be cleared.
 * @n: Pointer to the number whose bit value to clear.
 * Return: 1 if it works, or -1 if an error occurrs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
	return (-1);
	}

	*n = *n & (~(1 << index));
	return (1);
}
