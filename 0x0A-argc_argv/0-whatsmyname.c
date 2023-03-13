#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts the number of arguements
 * @argv: contains an array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
