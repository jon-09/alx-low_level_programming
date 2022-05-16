#include "function_pointers.h"
/**
 * array_iterator - function executes another function given as a parameter
 * @array: array containing the pointers of functions
 * @size: size of the array
 * @action: pointer to the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int indx;

	if (array == NULL || action == NULL)
		return;

	for (indx = 0; indx < size; indx++)
		action(array[indx]);
}
