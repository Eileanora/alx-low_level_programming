#include "main.h"
#define BUFFER_SIZE 1024

/**
 * open_file - opens a file
 * @filename: name of file to be opened
 * @fd_from: file descriptor of file to be opened
 * fd_to: file descriptor of file to be copied to
*/
void open_file(char *filename, int *fd_from, int *fd_to)
{
	*fd_from = open(filename, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	*fd_to = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * close_file - closes a file
 * @fd_from: file descriptor of file to be closed
 * @fd_to: file descriptor of file to be closed
 * @filename: name of file to be closed
*/
void close_file(int *fd_from, int *fd_to, char *filename)
{
	int close_from, close_to;

	close_from = close(*fd_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd_from);
		exit(100);
	}

	close_to = close(*fd_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd_to);
		exit(100);
	}
}

/**
 * copy_file - copies the content of a file to another file
 * @fd_from: file descriptor of file to be copied from
 * @fd_to: file descriptor of file to be copied to
 * @filename: name of file to be copied
*/
void copy_file(int *fd_from, int *fd_to, char *filename)
{
	int read_from, write_to;
	char buffer[BUFFER_SIZE];

	read_from = read(*fd_from, buffer, BUFFER_SIZE);
	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	while (read_from > 0)
	{
		write_to = write(*fd_to, buffer, read_from);
		if (write_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
		read_from = read(*fd_from, buffer, BUFFER_SIZE);
		if (read_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_file(argv[1], &fd_from, &fd_to);
	copy_file(&fd_from, &fd_to, argv[1]);
	close_file(&fd_from, &fd_to, argv[1]);

	return (0);
}
