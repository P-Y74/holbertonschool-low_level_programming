#include <unistd.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string (constant).
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s && *s++)
	{
		length++;
	}
	return (length);
}

/**
 * main - Prints a message to the standard error (stderr).
 *
 * Return: 1, as specified in the requirements.
 */
int main(void)
{
	char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, m, _strlen(m));

	return (1);
}
