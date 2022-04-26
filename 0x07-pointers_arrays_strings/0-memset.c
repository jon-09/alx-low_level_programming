#include "main.h"
/**
 * _memset - function fills a memory set with specific value
 * @s - address of the memory to be filled
 * @b - character to be used in the replacement process
 * @n - the number of bytes to be replaced 
 * Return - returns the pointer when successful
 */
char *_memset(char *s, char b, unsigned int n)
{
	int add = 0;

	while (n > 0)
	{
		s[add] = b;
		n--;
		add++;
	}
	return (s);
}
