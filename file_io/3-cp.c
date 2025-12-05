#include "main.h"
#include <stdlib.h>

/**
* print_usage - print a string
*/

void print_usage(void)
{
	char *str = "Usage: cp file_from file_to\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
*
 */

int main (int argc, char *argv[])
{
	int file_from, file_to;
	char buffer [1024];
	ssize_t read_from, write_to;

	if (argc != 3)
	{
		print_usage();
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	read_from = read(file_from, buffer, 1024);
	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf (STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	write_to = write(file_to, buffer, read_from);
	if (write_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return(0);
}