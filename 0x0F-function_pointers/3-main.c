#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of arguements
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int n, m;
	char opr;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n = atoi(argv[1]);
	m = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	opr = *argv[2];
	if (m == 0 && (opr == '/' || opr == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(n, m));
	return (0);
}
