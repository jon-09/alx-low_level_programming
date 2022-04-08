#include <stdio.h>
/**
 * main -entyr point
 * Return: returns 0 when successful
 */
int main(void)
{
	int i, x, y, z;

	for (i = 48; i <= 57; i++)
	{
		for (x = 48; x <= 57; x++)
		{
			for (y = 48; y <= 57; y++)
			{
				for (z = 48; z <= 57; z++)
				{
					if (y < z)
					{
						putchar(i);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
