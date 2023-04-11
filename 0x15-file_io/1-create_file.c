#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file -creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fi, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fi = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fi, text_content, len);

	if (fi == -1 || w == -1)
		return (-1);

	close(fi);

	return (1);
}

