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
	int i, y, z;

	strt = a;
	revr = a;
	y = n - 1;
	z = n / 2;
	for (i = 0; i < y; i++)
	{
		revr++;
	}
	for (i = 0; i < z; i++)
	{
		x = *revr;
		*revr = *strt;
		*strt = x;
		strt++;
		revr--;
	}
}
