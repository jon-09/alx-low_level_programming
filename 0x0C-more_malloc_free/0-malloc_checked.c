#include "main.h"
/**
 * malloc_checked - functions allocates memory
 * @b: input integer
 * Return: returns 0
 */
void *malloc_checked(unsigned int b)
{
	int *indx;

	indx = malloc(b);
	if (indx != NULL)
		return (indx);

	exit(98);
}
