#include "main.h"
/**
 * len - function finds the length of a string
 * @str - pointer of the string to pass
 * Return: returns the length
 */
int len(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + len(str + 1));
}

/**
 * _palid - functions checks if string is palindrome
 * @x: index
 * @lens: lengthe of the string
 * @st_r: pointer pf the string
 * Return: returns 1 is true otherwise 0
 */
int _palid(int x, int lens, char *st_r)
{
	if (lens > 0)
	{
		if (st_r[x] == st_r[lens])
		{
			return (_palid(x + 1, lens - 1, st_r));
		}
		else if (st_r[x] != st_r[lens])
		{
			return (0);
		}
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: char input
 * Return: i if string is palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_palid(0, len(s) - 1, s));
}
