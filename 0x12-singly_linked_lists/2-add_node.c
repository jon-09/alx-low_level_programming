#include "lists.h"
/**
 * add_node - function adds a new node
 * @head: head of the list
 * @str: string
 * Return: the address of the element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Nnod;
	size_t chr;

	Nnod = malloc(sizeof(list_t));
	if (Nnod == NULL)
		return (NULL);

	Nnod->str = strdup(str);

	chr = 0;
	while (str[chr])
		chr++;

	Nnod->len = chr;
	Nnod->next = *head;
	*head = Nnod;

	return(*head);
}
