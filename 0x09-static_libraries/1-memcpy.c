#include "main.h"
/**
 * _memcpy - function copies a memory area
 * @n: the size of memory to be copied
 * @src: the source of the memory to be copied
 * @dest: destination to copy the memory
 * Return: returns dest value when successful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int replc = 0;

	while (n > 0)
	{
		dest[replc] = src[replc];
		n--;
		replc++;
	}
	return (dest);
}
