#include "main.h"
/**
 * _recursion -functioin returns squareroot
 * @x: interger that's equal to n
 * @y: sum of the natural number
 * Return: returns the passed integer
 */
int _recursion(int x, int y)
{
	int z = y * y;

	if (x <= z)
	{
		if (x == z)
			return (y);
		else
			return (-1);
	}
	else
		return (_recursion(x, y + 1));
}
/**
 * _sqrt_recursion - function returns the squareroot
 * @n: integer input
 * Return Always 0 when successful
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (_recursion(n, 0));
}
