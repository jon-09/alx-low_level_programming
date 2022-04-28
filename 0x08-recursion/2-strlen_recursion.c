#include "main.h"
/**
 * _strlen_recursion - Function returns the length of a string
 * @s: Pointer of string
 * Return: Always 0 when successful
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	else 
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
