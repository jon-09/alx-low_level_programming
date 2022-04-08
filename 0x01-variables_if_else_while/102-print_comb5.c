#include <stdio.h>
/**
 * main -entyr point
 * Return: returns 0 when successful
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 100; i++)
	{
		for (x = 0; x < 100; x++)
		{
			if (i < x)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				if (i != 98 || x != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
