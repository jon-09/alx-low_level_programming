#include "main.h"
/**
 * _pow_recursion - Function return value o x raised to the power y
 * @x: integer input
 * @y: integer input
 * Return: Always 0 when successful
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y -1));
		}
	}
	else
		return (-1);
}
