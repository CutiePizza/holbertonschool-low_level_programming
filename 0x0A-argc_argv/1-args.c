#include <stdio.h>

/**
 * main - Prints number of rguments passed to main
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
