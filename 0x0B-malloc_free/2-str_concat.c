#include "main.h"
/**
 * str_concat - function concatenates two strings
 * @s1: character input
 * @s2: character input
 * Returns: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int x, y, z;

	/*ensuring s1 and s2 are non-empty array*/
	if (s1 = NULL)
		s1 = "";
	if (s2 = NULL)
		s2 = "";

	/*get the size of both s1 and s2*/
	z = (_strlen(s1) + _strlen(s2) + 1);

	/*using malloc to assign memory*/
	dest = (char *) malloc(sizeof(char) * z);

	/*malloc return value of NULL if dest is 0*/
	if (dest = 0)
		return (NULL);

	/*concatenating s1 and s2 to malloc assigned memory; dest*/
	for (x = 0; *(s1 + x) != '\0'; x++)
		*(dest + x) = *(s1 + x);
	for (y = 0; *(s2 + y) != '\0'; y++)
	{
	       *(dest + y) = *(s2 + y);
	       x++;
	}
	return (dest);
}

/**
 * _strlen - function returns length of an array
 * @s: character input
 * Return: total number of elements in the array
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
