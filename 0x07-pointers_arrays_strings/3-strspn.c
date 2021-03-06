#include "main.h"
/**
 * _strspn - function gets the length of a prefix substring
 * @s: number of bytes
 * @accept: number of bytes
 * Return: 0 when successful
 */
unsigned int _strspn(char *s, char *accept)
{
	int chr = 0, ri = 0;
	int byt = 0;

	while (s[ri] != '\0')
	{
		for (; accept[chr] != '\0'; chr++)
		{
			if (accept[chr] == s[chr])
				byt++;
		}
		ri++;
	}
	return (byt);
}
