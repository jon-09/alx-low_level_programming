#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		int y = x % 3;
		int z = x % 5;

		if (y != 0 || z != 0)
		{
			printf("%d ", x);
		}
		else if (y == 0)
		{
			printf("Fizz ");
		}
		else if (z == 0);
		{
			printf("Buzz ");
		}
		else
		{
			printf("FizzBuzz");
		}
	}
	printf('\n');
	return (0);
}
