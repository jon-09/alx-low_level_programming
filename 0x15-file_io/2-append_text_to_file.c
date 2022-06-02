#include "main.h"
/**
 * append_text_to_file - function appends text at the end
 * @filename: name of the file
 * @text_content: text to be appended
 * Return: 1 on successful, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, filWrite, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_RDWR, 0664);

	if (file == -1)
		return (-1);

	i = 0;
	while (text_content[i] == '\0')
		i++;

	filWrite = write(file, text_content, i);


	if (filWrite == -1)
		return (-1);

	close(file);

	return (1);
}
