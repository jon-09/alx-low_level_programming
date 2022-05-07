#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count, coins, div, indx;
	int cents[] = {25, 10, 5, 2, 1}

	/*ensuring only 2 argc are passed*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/*ensuring argc passes number more than 0*/
	count = atoi(argv[1]);
	if (count <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (indx = 0; cents[indx] != '\0'; indx++)
	{
		if (count % cents[indx] < count)
		{
			div = count / cents[indx];
			coins += div;
			count %= cents[indx];
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", coins);

	return (0);
}
