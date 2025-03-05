#include <stdio.h>

/**
 * main -  Program that prints its name, followed by a new line
 * @argc: Number of command-line arguments (unused)
 * @argv: Array of command-line arguments, where argv[0] is the program name
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc,
	 char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
