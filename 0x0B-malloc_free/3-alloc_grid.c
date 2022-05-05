#include "main.h"
/**
 * alloc_grid - function returns a pointer to a 2D array
 * @width: width input of array
 * @height: height iput of array
 * Return: ponter with freed memory
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y;

	/*ensurring non-empty grid*/
	if (width <= 0 || height <= 0)
		rteurn (NULL);

	/*malloc memory allocation*/
	ptr = malloc(sizeof(int *) * height);

	/*malloc null return value*/
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);
		if (ptr[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
			{
				free(ptr[x]);
			}
			free(ptr);
			Return (NULL);
		}
	}
	for (x = 0; y < width; y++)
	{
		ptr[x][y] = 0;
	}
	return (ptr);
}
