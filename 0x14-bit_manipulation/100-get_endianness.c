#include "main.h"
/**
 * get_endianness - function checks for endianness
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *) &i;

	return ((int) *c);
}
