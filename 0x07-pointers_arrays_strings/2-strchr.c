#include "main.h"
/**
 * _strchr - function locates a character in a string
 * @s: the string
 * @c: the character to find
 * Return: returns the character if present otherwise NULL
 */
char *_strchr(char *s, char c)
{
	char chr;
	int i;

	while ((chr >= 'a') || (chr >= 'A'))
	{
		for (i = 0; i <= sizeof(s); i++)
		{
			if (chr == c)
			{
				break;
				return (c)
			}
		}
		char++;
	}
	return (NULL);
}
