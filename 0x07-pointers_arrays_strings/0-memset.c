#include "main.h"
/**
 * _memset() - function fills the first n bytes
 * of the memory area pointed to by s with the constant byte b
 * @s - the destination
 * @b - character to be used in the replacement process
 * @n - the number of bytes to be replaced by b from s
 * Return - returns the pointer when successful
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	
	while (i > 0)
	{
		if (n > 0)
		{
			s[i] = b;
			n--;
		}
		i++;
	}
	return (s);
}
