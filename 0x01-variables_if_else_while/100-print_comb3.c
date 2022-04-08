#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int x = 48;
	int i;

	while (x <= 57)
	{
		for (i = 48; i <= 57; i++)
		{
			if (x < i && x != i)
			{
				putchar(x);
				putchar(i);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
