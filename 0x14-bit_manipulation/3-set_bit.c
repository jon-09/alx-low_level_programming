#include "main.h"
/**
 * set_bit - function sets the value of a bit to 1
 * @n: the integer input
 * @index: position to start
 * Return: returns 1 if successful -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
