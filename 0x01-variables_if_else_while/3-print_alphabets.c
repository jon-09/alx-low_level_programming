#include <stdio.h>

/**
 * main - entry point
 * Return: returns 0 if successful
 */
int main(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
	{
		putchar(q);
	}
	for (q = 'A'; q <= 'Z'; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
