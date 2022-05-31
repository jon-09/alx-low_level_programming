#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: pointer to a string of 0 and 1
 * Return: the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned deci = 0;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] < '0' || b[x] >'1')
			return (0);

		deci = 2 * deci + (b[x] - '0');
	}
	return (deci);
}
