#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 when successfull
 */
int main(void)
{
	char x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
