#include "main.h"
/**
 * more_numbers - function prints the numbers 0 to 14 10 times
 * Return: Always 0
 */
void more_numbers(void)
{
	int x;
	int a;
	
	for (a = 0; a < 10; a++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + 48);
			}
			_putchar((x % 10) + 48);
		}
		_putchar('\n');
	}
}
