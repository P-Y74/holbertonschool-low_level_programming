#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>

/**
 * close_file - Closes a file descriptor and handles errors
 * @fd: The file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content_file_to_another_file - Copies content from one file to another.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 */
void copy_content_file_to_another_file(const char *file_from, char *file_to)
{
	int fd_from, fd_to;
	ssize_t read_bytes, write_bytes;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); }
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close_file(fd_from);
		exit(99); }
	read_bytes = read(fd_from, buffer, 1024);
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			close_file(fd_from);
			close_file(fd_to);
			exit(98); }
	while (read_bytes > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_file(fd_from);
			close_file(fd_to);
			exit(99); }
		read_bytes = read(fd_from, buffer, 1024);
		if (read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			close_file(fd_from);
			close_file(fd_to);
			exit(98); }
	}
	close_file(fd_from);
	close_file(fd_to); }
/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: Always 0 on success
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
