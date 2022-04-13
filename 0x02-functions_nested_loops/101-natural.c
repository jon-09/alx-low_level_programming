#include <stdio.h>

/**
 * main - prints the sum of all the multiples
 * of 3or 5 below 1024
 * Return: Always 0;
 */
int main(void)
{
	unsigned long int sum, sum3, sum5;
	int i;

	sum = 0;
	sum3 = 0;
	sum5 = 0;

	for (i = 0; 1 < 1024; i++)
	{
		if ((1 % 3) == 0)
		{
			sum3 = sum3 + i;
		}
		else if ((i % 5) == 0)
		{
			sum5 = sum5 + 1;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
