#include "main.h"
/**
 * more_numbers - function prints the numbers 0 to 14 10 times
 * Return: Always 0
 */
void more_numbers(void)
{
	int x;
	int a;
	
	for (a = 1; a <= 10; a++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
