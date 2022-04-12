#include "main.h"
/**
 * _isalpha - entry
 * @c: The int to print
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
