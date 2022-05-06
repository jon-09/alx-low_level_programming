#include "main.h"
/**
 * argstostr - function concatenates all the args within the program
 * @ac: corresponds to the width of the grid
 * @av: corresponds to the height of the grid
 * Return: returns the args in grid
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int size, x, y, z;

	if (ac == 0 || av == NULL)
		return (NULL);

	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			size++;
		}
	}
	size = size + ac;
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z] = '\n';
			z++;
		}
	}
	return (str);
}
