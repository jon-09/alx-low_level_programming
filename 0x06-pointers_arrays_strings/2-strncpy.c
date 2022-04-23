#include "main.h"
/**
 * _strncpy - function copies a string 
 * @dest: destination
 * @src: source
 * @n: size of bytes to be copied
 * Return: returns 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x =0; x < n; x++)
	{
		if (src[x] != '\0')
		{
			dest[x] = src[x];
		}
		else
			src[x] = '\0';
	}
	return (dest);
}
