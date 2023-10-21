#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t of;
	ssize_t w;
	ssize_t r;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(of, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(of);
	return (w);
}
