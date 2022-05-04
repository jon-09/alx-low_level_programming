#include <unistd.h>
/**
 * _putchar - writes a characher to the stdio
 * @c: character input
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
