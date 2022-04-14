#include "main.h"
/**
 * print_diagonal - function that print a diagonal line on the terminal
 * @n: the number of time to print '_'
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (x = 1; x < a; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
