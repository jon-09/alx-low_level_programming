#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct listint
{
	int n;
	struct listint *next;
}listint_t;

size_t print_listint(const listint_t *h);

#endif
