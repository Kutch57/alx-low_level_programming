#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: counts the number of arguments
 * @argv: arguments
 * Return: Always 0(success)
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("Number of Command-line arguments (excluding the program name) is %d\n", argc - 1);
	return (0);
}
