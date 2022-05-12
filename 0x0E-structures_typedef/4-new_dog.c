#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates a new dog
 * @name: character input
 * @age: float input
 * @owner: character input
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, o, i;
	dog_t *doggy;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	n = 0;
	while (name[n])
		n++;

	doggy->name = malloc(sizeof(char) * (n + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	i = 0;
	while (i <= n)
	{
		doggy->name[i] = name[i];
		i++;
	}

	doggy->age = age;

	i = 0;
	o = 0;
	while (owner[o])
		o++;

	doggy->owner = malloc(sizeof(char) * (o + 1));
	if (doggy->owner ==NULL)
	{
		free(doggy->name);
		free(doggy);

		return (NULL);
	}

	while (i < o)
	{
		doggy->owner[i] = owner[i];
		i++;
	}

	return (doggy);
}
