#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 when successful
 */
int main(void)
{
	int x;
	int i = 48;

	for (x = 48; x <= 56; x++)
	{
		do
		{
			putchar(x);
			putchar(i);
			putchar(',');
			putchar(' ');
			i++;
		}while (i <= 57); 
	}
	putchar('\n');
	return (0);
}
