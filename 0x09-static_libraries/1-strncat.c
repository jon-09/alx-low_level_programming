#include "main.h"
/**
 * _strncat - concatenetes two strings
 * @dest: destination
 * @src: source
 * @n: size of bytes to br concatenated from src
 * Return: the pointer of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	/* find the NULL byt of dest */
	while (*(dest + x) != '\0')
	{
		x++;
	}

	/* concat n bytes from src to dest */
	while (y < n)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
		{
			break;
		}
		x++;
		y++;
	}
	return (dest);
}
