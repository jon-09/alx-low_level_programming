#include "main.h"
#include <string.h>
/**
 * *_strncat - function concatenates string with specifi size
 * @*src - pointer to source array
 * @*dest - pointer to destination array
 * @n - size of the bytes to be concatenated from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	/* find the NULL byte of the dest */
	while (*(dest + x) != '\0')
	{
		x++;
	}

	/* concat src to dest with specif src size(int n) */
	while (y < n)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}
