#include "main.h"

/**
 * cnt_words - function counts the elements forming the word
 * @str: character input
 * Return: total number of elements
 */
int cnt_words(char *str)
{
	int i = 0;
	int wrd = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] =='\t'
			|| str[i] == '\f' || str[i] == '\r'
			|| str[i] =='\v')
			wrd++;

		i++;
	}
	return (wrd);
}

/**
 * strtow - function that splits a string into words
 * @str: character input 
 * Return: str
 */
char **strtow(char *str)
{
	int index = 0;
	int size = cnt_words(str);
	int index2 = 0;
	char **arr = (char **) malloc(sizeof(char *) * size);

	if (arr == NULL)
		return (NULL);

	while (str[index])
	{
		if (str[index] == ' ')
		{
			index++;
			index2++;
		}
		else
		{
			*(arr + index2) = (char *) malloc(sizeof(char) * index + 1);
			*(arr + index2) = &str[index];
		}
		index++;
	}
	**arr = '\0';
	return (arr);
}
