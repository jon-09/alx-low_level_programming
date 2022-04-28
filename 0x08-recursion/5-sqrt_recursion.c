#include "main.h"
/**
 * _recursion - my function to evaluate the integer
 * @:n integer input
 * @x: interger that's equal to n
 * @y: sum of the natural number
 * Return: Always 0 when successful
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

/* _sqrt_recursion - function returns natural a number */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (_recursion(n, 0));
}
