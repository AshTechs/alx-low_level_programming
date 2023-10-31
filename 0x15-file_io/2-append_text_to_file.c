#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Filename.
 * @text_content: Added content.
 * Return: 1 if the file exists. -1 if it doesn't.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int md;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	md = open(filename, O_WRONLY | O_APPEND);

	if (md == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(md, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(md);

	return (1);
}
