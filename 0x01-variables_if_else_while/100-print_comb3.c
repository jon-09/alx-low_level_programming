#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int i = 48;
	int x = 48;

	while (x < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (x != i && x < i)
			{
				putchar(x);
				putchar(i);
				if (i == 57 && x == 56)
				{
					break;
				}
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
