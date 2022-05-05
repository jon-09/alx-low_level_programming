#include "main.h"
/**
 * create_array - functions creates an array of characters
 * @size: number of elements in the array
 * @c: character input
 * Return: returns the pointer of character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int indx = 0;

	/*check size being passed if null*/
	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		/*use malloc for dynamic allocation of memory*/
		ptr = (char *) malloc(sizeof(c) * size);
	
		while (indx < size)
		{
			*(ptr + indx) = c;
			indx++;
		}
		return (ptr);
	}
}
