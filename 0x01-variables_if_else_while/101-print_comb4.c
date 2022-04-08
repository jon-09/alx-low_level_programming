#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int x, i, z;

	for (x = 48; x < 58; x++)
	{
		for (i = 49; i < 58; i++)
		{
			for (z = 50; z < 58; z++)
			{
				if (x < i && i < z)
				{
					putchar(x);
					putchar(i);
					putchar(z);
					if ( x != 55 || i != 56)
					{
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
