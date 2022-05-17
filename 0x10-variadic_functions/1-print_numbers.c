#include "variadic_functions.h"
/**
 * print_numbers - unction that prints numbers, followed by a new line
 * @separator: the string separateor
 * @n: number of args to be passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vList;
	unsigned int indx;

	va_start(vList , n);

	for (indx = 0; indx < n: indx++)
	{
		printf("%d", va_arg(vList, int));
		if (separator != 0 && indx < n-1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(vList)
}
