#include "main.h"
/**
 * more_numbers - function prints the numbers 0 to 14 10 times
 * Return: Always 0
 */
void more_numbers(void)
{
	int x;
	int a = 1;
	
	while (a <= 10)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}
