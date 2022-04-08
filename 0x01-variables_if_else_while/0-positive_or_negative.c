#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * more headers goes there
 * betty style doc for function main goes there
 * Return: return (0) when prog executes successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (n >= 0)
	{
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is positive\n", n);
		}
		break;
	}
	while (n < 0)
	{
		printf("%d is negative\n", n);
		break;
	}
	return (0);
}

