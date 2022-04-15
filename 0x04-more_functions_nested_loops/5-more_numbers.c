#include "main.h"
/**
 * more_numbers - function prints the numbers 0 to 14 10 times
 * Return: Always 0
 */
void more_numbers(void)
{
	int x, a;

	for (a = 0; a <= 10; a++)
	{
		for (x = 0; x <= 14; x++)
		{
			_puchar(x);
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
