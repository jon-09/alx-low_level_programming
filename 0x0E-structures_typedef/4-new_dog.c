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
	
	for (i = 0; i < n; i++)	
		doggy->name[i] = name[i];

	doggy->age = age;

	i = 0;
	o = 0;
	while (owner[o])
		o++;

	doggy->owner = malloc(sizeof(char) * (o + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);

		return (NULL);
	}

	for (; i < o; i++)
		doggy->owner[i] = owner[i];

	return (doggy);
}
