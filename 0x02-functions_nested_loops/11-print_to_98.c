#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -prints all natural numbers fro n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number to start count
 * Return: alwyas returns 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
