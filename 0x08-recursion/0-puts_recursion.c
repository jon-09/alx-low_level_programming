#include "main.h"
/**
 * _puts_recursion - Funtion prints a string
 * @s: pointer of the string to be printed
 * Return: Always 0 whne successful
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
		_puchar(*s);
		_puts_recursion(s + 1);
}
