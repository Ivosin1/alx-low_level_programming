#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Points to the name of the file to create.
 * @text_content: Points to the string to be written into the file.
 *
 * Return: -1 If the function fails and 1 to ascertain success.
 */

int create_file(const char *filename, char *text_content)
{
	int of, wf, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wf = write(of, text_content, len);

	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}
