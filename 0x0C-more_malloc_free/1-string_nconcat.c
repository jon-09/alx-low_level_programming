#include "main.h"
/**
 * string_nconcat - function concats two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to be concated
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1, sz2, indx;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	sz1 = 0;
	while (s1[sz1] != '\0')
		sz1++;

	sz2 = 0;
	while (s2[sz2] != '\0')
		sz2++;

	if (n > sz2)
		n = sz2;

	ptr = malloc(sizeof(char) * (sz1 + n + 1));
	if (ptr == NULL)
		return (0);

	for (indx = 0; indx < sz1; indx++)
		ptr[indx] = s1[indx];

	for (; indx < (sz1 + n); indx++)
		ptr[indx] = s2[indx - sz1];

	ptr[indx] = '\0';

	return (ptr);
}
