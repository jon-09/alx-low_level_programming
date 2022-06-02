#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * text_content: the string to be written in the file
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int file, filWrite, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	i = 0;
	while (text_content[i] != '\0')
		i++;

	filWrite = write(file, text_content, i);

	if (filWrite == -1)
		return (-1);

	close(filWrite);

	return (1);
}
