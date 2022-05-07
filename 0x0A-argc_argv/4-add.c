#include "main.h"
/**
 * main- entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, m, ad;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (!(isdigit(argv[n][m])))
			{
				printf("Error\n");
				return (1);
			}
		}
		ad += atoi(argv[n]);
	}
	printf("%d\n", ad);

	return (0);
}
