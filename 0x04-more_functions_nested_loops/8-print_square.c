#include "main.h"
/**
 * print_square - prints a square followed by a  new line
 * @size: is the size of the square
 * Return: always 0
 */
void print_square(int size)
{
	int x, a;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
			for (x = 2; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
