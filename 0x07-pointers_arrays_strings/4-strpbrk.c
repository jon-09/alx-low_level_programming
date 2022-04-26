#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: 0 when successful
 */
char *_strpbrk(char *s, char *accept)
{
	int ocr = 0;

	for (; accept[ocr] != '\0'; ocr++)
	{
		if (accept[ocr] == s[ocr])
			return (s);
		else if (s[ocr] == '\0')
			break;
	}
	return (0);
}
