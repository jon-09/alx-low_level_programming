#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int x, i;

	for (x = 48; x <= 57; x++)
	{
		for (i = 48; x < i; i++)
		{
			putchar(x);
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
