#include "main.h"

/**
 * print_alphbet - entry point
 * Return: returns 0 when successful
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

}
