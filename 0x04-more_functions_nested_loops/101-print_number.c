#include "main.h"
/**
 * print_number - function prints the number passed
 * @n: input integer
 * Return: Always 0 when successful
 */
void print_number(int n)
{
	unsigned int x, y, z;

	if (n < 0)
	{
		_putchar(45);
		y = n * -1;
	}
	else
	{
		y = n;
	}
	x = y;
	z = 1;
	while (x > 9)
	{
		x /= 10;
		z *= 10;
	}
	for (; z >= 1; z /= 10)
	{
		_putchar((( y / z) % 10) + 48);
	}
}
