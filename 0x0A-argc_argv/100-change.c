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
	int cents[] = {25, 10, 5, 2, 1};

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

	indx = 0;
	while (cents[indx] != '\0')
	{
		if (count % cents[indx] < count)
		{
			if (count != 0)
			{
				div = count / cents[indx];
				coins += div;
				count %= cents[indx];
			}
			else
				break;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		indx++;
	}

	printf("%d\n", coins);

	return (0);
}
