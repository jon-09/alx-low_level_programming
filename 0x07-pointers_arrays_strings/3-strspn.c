#include "main.h"
/**
 * _strspn - function gets the length of a prefix substring
 * @s: number of bytes
 * @accept: number of bytes
 * Return: 0 when successful
 */
unsigned int _strspn(char *s, char *accept)
{
	int chr;
	unsigned int byt;

	for (chr = 0; accept[chr] != '\0'; chr++)
	{
		if (accept[chr] == s[chr])
			byt++;
	}
	return (byt);
}
