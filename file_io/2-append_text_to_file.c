#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content : string to append to the end of a file
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fic = 0;
	int written;
	int count = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fic = open(filename, O_WRONLY | O_APPEND);
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

		if (written == -1 || written != count)
		{
		close(fic);
		return (-1);
		}
	}

	close(fic);
	return (1);
}
