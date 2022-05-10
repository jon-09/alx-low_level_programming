#include "main.h"
/**
 * _calloc - functions allocates memory for an array
 * @nmemb: size of elements in the array
 * @size: size of bytes to be allocated
 * Return: Always zero;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int indx;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (NULL);

	for (indx = 0; indx < (size * nmemb); indx++)
		ptr[indx] = 0;

	return (ptr);
}
