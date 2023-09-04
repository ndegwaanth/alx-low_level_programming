#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the pointer to file
 * @text_content: the content of the filename
 * Return: 1 (success) and -1 on (failure)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, m, n;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		m = 0;
		while (text_content[m])
		{
			m++;
		}
	}

	file = open(filename, O_WRONLY | O_APPEND);
	n = write(file, text_content, m);

	if (file == -1 || n == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
