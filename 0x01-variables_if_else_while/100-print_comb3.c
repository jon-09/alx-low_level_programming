#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int x;
	int i = 48;
	
	for (x = 48; x <= 57; x++)
	{
		while (i <= 57)
		{
			if (x < i && x != i)
			{
				putchar(x);
				putchar(i);
				putchar(',');
				putchar(' ');
			}
			i++;
		}
	}
	putchar('\n');
	return (0);
}
