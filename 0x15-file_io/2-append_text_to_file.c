#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: -1 if the function fails or filename is NULL.
 * -1 if the file does not exist or the user lacks write permissions.
 *  1 to ascertain success.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int of, wf, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	of = open(filename, O_WRONLY | O_APPEND);
	wf = write(of, text_content, len);

	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}
