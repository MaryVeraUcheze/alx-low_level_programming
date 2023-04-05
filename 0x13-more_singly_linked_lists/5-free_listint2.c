#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *freedom,*temp;

	if(head == NULL)
	return;


	freedom = *head;
	while(freedom != NULL)
	{
	temp = freedom;
	freedom = freedom->next;
	free(temp);
	}
	head = NULL;
}
