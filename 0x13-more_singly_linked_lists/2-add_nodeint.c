#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
		return (NULL);


	new_list->n = n;
	new_list->next = *head;
	*head = new_list;


	return (*head);
}
