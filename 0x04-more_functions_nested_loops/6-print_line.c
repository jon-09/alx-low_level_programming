#include "main.h"
/**
 * print_lin - function draws a straignt line in the terminal
 * @n: nimber of times '_' to be printed
 * Return: Always 0 when successful
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <=n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
