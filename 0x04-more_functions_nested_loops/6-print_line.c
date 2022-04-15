#include "main.h"
/**
 * print_line - function draws a straignt line in the terminal
 * @n: number of times '_' to be printed
 * Return: Always 0 when successful
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
