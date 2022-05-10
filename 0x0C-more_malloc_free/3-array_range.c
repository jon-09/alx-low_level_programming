#include "main.h"
/**
 * array_range - functions creates an arraya of integers
 * @min: Has the lowest number to be included in the array
 * @max: Has the maximum number to be included in the array
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int indx;
	int size;

	if (min > max)
		return (NULL);

	size = (max - min);
	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == 0)
		return (NULL);

	for (indx = 0; indx < size; indx++)
		ptr[indx] = min++;

	return (ptr);
}
