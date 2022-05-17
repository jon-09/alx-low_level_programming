#include "variadic_functions.h"
/**
 * print_strings - Function prints string followed by a new line
 * @separator: string to be printed in between
 * @n: the number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vList;
	unsigned int indx;
	char *ptr;

	va_start(vList, n);

	for (indx = 0; indx < n; indx++)
	{
		ptr = va_arg(vList, char *);

		if (ptr != NULL)
			printf("%s", ptr);

		else
			printf("(nil)");

		if (indx < n -1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vList);
}
