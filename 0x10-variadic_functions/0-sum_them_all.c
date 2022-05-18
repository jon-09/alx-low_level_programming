#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the count of elements
 * Return: Sum of the parameter passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list varia;
	unsigned int indx;
	int add;

	if (n == 0)
	{
		return (0);
	}
	va_start(varia, n);

	for (indx = 0; indx < n; indx++)
	{
		add = add + va_arg(varia, int);
	}
	va_end(varia);

	return (add);
}
