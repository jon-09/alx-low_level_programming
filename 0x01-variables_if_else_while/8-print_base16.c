#include <stdio.h>
/**
 * main - entry point
 * Return: returns (0) when successful
 */
int main(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
