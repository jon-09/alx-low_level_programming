#include "main.h"
/**
 * print_most_numbers - function prints numbers from 0-9 excluding 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i = '0');
	}
	_putchar('\n');
}
