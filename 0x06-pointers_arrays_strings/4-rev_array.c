#include "main.h"
/**
 * reverse_array -  rverses the contents within an array
 * @a: an array
 * @n:number ofintegers of the array
 * Return:returns void when successful
 */
void reverse_array(int *a, int n)
{
	int *strt, *revr, x;
	int i;

	strt = a;
	revr = a;
	for (i = 0; i < n-1; i++)
	{
		revr++;
	}
	for (i = 0; i < n / 2; i++)
	{
		x = *revr;
		*revr = *strt;
		*strt = c;

		strt++;
		revr--;
	}
}
