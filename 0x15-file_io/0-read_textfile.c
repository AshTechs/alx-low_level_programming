#include "main.h"

/**
 * read_textfile - Reads a text file and prints the letters
 * @filename: Filename.
 * @letters: Letters printed.
 * Return: nwr, 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int md;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	md = open(filename, O_RDONLY);

	if (md == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(md, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(md);

	free(buf);

	return (nwr);
}
