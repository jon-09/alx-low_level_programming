#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int x = 48;
	int i = 49;

	while (x < 57)
	{
		while (i < 57)
		{
			putchar(x);
			putchar(i);
			putchar(',');
			putchar(' ');
			i++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
