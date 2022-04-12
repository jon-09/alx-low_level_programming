#include "main.h"
#include <stdio.h>
/**
 * print_times_table - entry point
 * @n: intput
 * Return: Always 0
 */
void print_times_table(int n)
{
	int i;
	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			multiple = (i * n);
			printf("%d, ", multiple);
		}
	}
	else
	{
		printf("\n");
	}
}
