#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: Number of command-line arguments (unused)
 * @argv: Array of commande-line arguments
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc,
	 char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
