#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: Number of command-line arguments, including argv[0]
 * @argv: Array of command-line arguments (unused)
 *
 * Return: 0
 */
int main(int argc,
	 __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
