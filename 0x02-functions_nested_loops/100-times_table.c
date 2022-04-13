#include "main.h"
#include <stdio.h>
/**
 * print_times_table - entry point
 * @n: intput
 * Return: Alway returns 0
 */
void print_times_table(int n)
{
	int a;
	int rep, b;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a < n; a++)
	{
		int x = n + 1;
		for (b = 0; b < x; b++)
		{
			rep = a * b;
			if (b == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
