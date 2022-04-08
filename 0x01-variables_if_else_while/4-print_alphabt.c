#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 */
int main(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
	{
		if (q != 'e' && q != 'q')
		{
			putchar(q);
		}
	}
	putchar('\n');
	return (0);
}
