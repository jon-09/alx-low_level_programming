#include "main.h"
/**
 * read_textfile - function reads a text file and prints it
 * @filename: the file to be read
 * @letters: number of letters to be read and printed
 * Return: actual number of letters it could read, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t filRead, filWrite;
	char *TotSize;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	TotSize = malloc(sizeof(char) * letters);

	if (file == -1)
		return (0);

	if (TotSize == NULL)
		return (0);

	filRead = read(file, TotSize, letters);
	filWrite = write(STDOUT_FILENO, TotSize, filRead);

	close(file);

	free(TotSize);

	return (filWrite);
}
