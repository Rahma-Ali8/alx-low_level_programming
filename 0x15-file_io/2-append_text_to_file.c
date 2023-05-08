#include "main.h"

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: file to append
 * @text_content: text to add at the end
 *
 * Return: 1 if the file exists and -1 if the file does not exist
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
