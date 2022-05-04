#include "main.h"
#include <string.h>
/**
 * *_strcat - function concatenates strings.
 * @src: string to be added - source
 * @dest: string to be extended - destination
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	/* finding the NULL character(\0) */
	while (*(dest + x) != '\0')
	{
		x++;
	}

	/* concat src(source) to dest with nullbyte - \0(destination) */
	while (y >= 0)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}
