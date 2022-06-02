#include "main.h"
/**
 * main - copies contents of one file to another
 * @argc: number of arguments passed
 * @argv: the argument vectors
 * Return: returns......
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int file, file_to, filWrite, filRead, filClose;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	filRead = read(file, buffer, 1024);
	if (filRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (filRead > 0)
	{
		filWrite = write(file_to, buffer, filRead);
		if (filWrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	filClose = close(file);
	if (filClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
	filClose = close(file_to);
	if (filClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);

}
