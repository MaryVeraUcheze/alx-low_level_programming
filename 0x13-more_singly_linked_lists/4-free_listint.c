#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *freedom = head;

	while (freedom != NULL)
	{
	listint_t *temp = freedom;

	freedom = freedom->next;
	free(temp);
	}

}
