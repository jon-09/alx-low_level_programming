#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
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
