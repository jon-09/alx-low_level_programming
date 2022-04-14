#include "main.h"
/**
 * _isupper - a function checks for uppercase character
 * @c: input
 * Return: return 1 if c uppercase, 0 othercase
 */
int _isupper(int c)
{
	if (( c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
