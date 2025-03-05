#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int product = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);
	return (0);
}
