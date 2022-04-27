#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: the list to be printed
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
