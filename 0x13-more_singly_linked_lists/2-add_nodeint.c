#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds anew node at the beginning of a linked list
 * @head: a pointer to the head of the linked list
 * @n: the number to be added to the list
 *
 * Return: the address of the new node, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
		return (NULL);
	list->n = n;
	list->next = *head;
	*head = list;
	return (list);
}
