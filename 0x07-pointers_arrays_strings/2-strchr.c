#include "main.h"
/**
 * _strchr - function locates a character in a string
 * @s: the string
 * @c: the character to find
 * Return: returns the character if present otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] > '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
