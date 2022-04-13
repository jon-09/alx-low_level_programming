#include "main.h"
#include <stdio.h>
/**
 * print_times_table - entry point
 * @n: intput
 * Return: Alway returns 0
 */
void print_times_table(int n)
{
	int a = 0;
	int rep, b;

	if (n < 0 || n > 15)
		return;
	while (a < n)
	{
		for (b = 0; b <= n; b++)
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
		a++;
	}
}
