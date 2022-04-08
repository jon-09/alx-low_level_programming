#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int i = 48;
	int x = 48;

	while (x < 57)
	{
		i = 48;
		while (i < 57)
		{
			if (x != i && x < i)
			{
				putchar(x);
				putchar(i);
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
