#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vectors
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
