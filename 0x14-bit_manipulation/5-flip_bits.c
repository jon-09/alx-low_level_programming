#include "main.h"
/**
 * flip_bits - function returns the number of bits
 * required to flip from one to other
 * @n: integer input
 * @m: integer input
 * Return: 0 if successful
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;

	unsignde long int xor = n ^ m;

	for (x = 63; i >= 0; i--)
	{
		if ((xor >> i) & 1)
			count++;

	}
	return (count);
}
