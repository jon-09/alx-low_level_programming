#include "main.h"
/**
 * *_strcat(char *dest, char *src) - function concatenates strings.
 * @src: string to be added.
 * @dest: string to be extended.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	/* */
	while (*(dest + x) != '\0')
	{
		x++;
	}
	y = 0;
	while (y >= 0)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
				break;
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
