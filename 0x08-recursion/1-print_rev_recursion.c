#include "main.h"
/**
 * _print_rev_recursion - reverses the string given
 * @s: pointer to the string to be reversed
 * Return: Always 0 when successful
 */
void _print_rev_recursion(char *s)
{
	if ( *s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + a);
		_putchar(*s);
	}
}
