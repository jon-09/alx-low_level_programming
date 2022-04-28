#include "main.h"
/**
 * factorial - fuction returns the factorial of a number
 * @n: input inter
 * Return: Always 0 when successful
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n -1));
		}
	}
	else 
		return (-1):
}
