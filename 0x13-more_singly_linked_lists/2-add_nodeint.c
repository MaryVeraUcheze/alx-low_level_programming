#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head pointer
 * @n: number of nodes
 * Return: the address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newblock;

	newblock = malloc(sizeof(listint_t));
	if (newblock == NULL)
	return (NULL);

	newblock->n = n;
	newblock->next = *head;

	*head = newblock;
	return (newblock);


}
