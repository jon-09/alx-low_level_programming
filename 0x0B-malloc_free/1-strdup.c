#include "main.h"

/**
 * _strlen - functions counts elements in string array
 * @s: the string array
 * Return: number of elemts in s
 */

int _strlen(char *s)
{
	unsigned int indx  = 0;

	while (s[indx] != '\0')
		indx++;
	return (indx);
}

/**
 * _strcpy - function copies str from src to dest
 * @src: source of the string to be copied
 * @dest: destination to copy the string
 * Return: returns pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int indx = 0;

	while (src[indx] != '\0')
	{
		dest[indx] = src[indx];
		indx++;
	}
	return (dest);
}
/**
 * _strdup - function returns a pointer to a duplicate str of str
 * @str: the str to be duplicated
 * Return: returns a pointer when successful
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
		return (NULL);

	size = _strlen(str) + 1;
	dest = (char *) malloc(sizeof(char) * size);

	if (dest == 0)
		return (NULL);

	_strcpy(dest, str);
	return (dest);
}
