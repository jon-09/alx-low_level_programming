#include "main.h"
/**
 * _strncpy - function copies a string 
 * @dest: pointer to the destination
 * @src: point to the source
 * @n: value of bytes to be copied from src
 * Return: returns pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
