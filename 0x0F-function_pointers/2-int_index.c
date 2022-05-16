#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: array containg the elemnts
 * @size: size of the array
 * @cmp - funtion pointer
 * Return: returns the index of cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int indx;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		if (cmp(array[indx]) != 0)
			return (indx);

	}
	return (-1);
}
