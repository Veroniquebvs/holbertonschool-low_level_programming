#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content : string to write to the file
 *
 *Return: the actual number of letters it could read and print
 */

int create_file(const char *filename, char *text_content)
{
	int fic = 0;
	int written;
	int count = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fic = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fic == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}

		written = write(fic, text_content, count);

		if (written == -1)
		{
		close(fic);
		return (-1);
		}
	}

	close(fic);
	return (1);
}
