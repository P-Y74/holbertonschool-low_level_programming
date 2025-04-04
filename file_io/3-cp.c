#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

/**
 * copy_content_file_to_another_file - Copies content from one file to another.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 */
void copy_content_file_to_another_file(const char *file_from, char *file_to)
{
	int openFile, createFile;
	ssize_t writeFile, readBytes;
	char buffer[1024];

	openFile = open(file_from, O_RDONLY);
	if (openFile == -1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98); }
	createFile = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (createFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(createFile);
		exit(99); }
	while ((readBytes = read(openFile, buffer, 1024)) > 0)
	{
		writeFile = write(createFile, buffer, readBytes);
		if (writeFile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(openFile);
			close(createFile);
			exit(99);
		}
	}
	if (readBytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(openFile);
		close(createFile);
		exit(98); }
	if (close(openFile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openFile);
		exit(100); }
	if (close(createFile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", createFile);
		exit(100); }
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: Always 0 on success, or one of the following error codes:
 *         - 97: Incorrect number of arguments.
 *         - 98: Error reading from the source file.
 *         - 99: Error writing to the destination file.
 *         - 100: Error closing a file descriptor.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_content_file_to_another_file(argv[1], argv[2]);

	return (0);
}
