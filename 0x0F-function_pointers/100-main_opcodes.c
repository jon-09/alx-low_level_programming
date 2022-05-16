#include "function_pointers"

/**
 * main - function prints its own opcodes
 * @argc: number of arguments passed
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int sze, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	sze = atoi(argv[1]);
	if (sze < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	for (i = 0;; i < sze; i++)
	{
		if (i == sze - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("02hhx\n ", arr[i]);
	}
	return (0);
}
