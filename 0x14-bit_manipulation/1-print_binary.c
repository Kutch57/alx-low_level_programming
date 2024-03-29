#include "main.h"

/**
 * print_binary - It prints the binary representation of a num.
 * @n: The num to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
