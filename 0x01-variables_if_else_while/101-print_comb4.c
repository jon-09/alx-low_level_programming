#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int x, i, z;

	for (x = 48; x <= 57; x++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (z = 48; z <= 57; z++)
			{
				if (x < i && i < z )
				{
					putchar(x);
					putchar(i);
					putchar(z);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
