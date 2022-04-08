#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 when successful
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
		{
			break;
		}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
