#include "main.h"
/**
 * get_bit - function returns the value of a bit
 * @n: the integer input
 * @index: the starting point
 * Retunt: value of the bit of -1 if unsuccessful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
