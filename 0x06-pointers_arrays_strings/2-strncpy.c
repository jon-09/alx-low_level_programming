#include "main.h"
/**
 * _strncpy - function copies a string 
 * @dest: destination
 * @src: source
 * @n: size of bytes to be copied from src
 * Return: returns pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x =0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (x = 0; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
