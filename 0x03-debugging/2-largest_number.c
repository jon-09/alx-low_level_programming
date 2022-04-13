#include "main.h"
/**
 * largest_number - prints largest number of 3 number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int larger;

	if (a >= b && a >= c)
	{
		larger = a;
	}
	else if (b >= a && b >= c)
	{
		larger = b;
	}
	else
	{
		larger = c;
	}

	return (larger);
}
