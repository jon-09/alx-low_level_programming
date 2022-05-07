#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vectors
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);

		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
