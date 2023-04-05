#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *freedom;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
	freedom = (*head)->next;
	free(*head);
	*head = freedom;
	}
	*head = NULL;
}
