#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *present;
	list_t *nt;

	present = head;

	while (present != NULL)
	{
		nt = present->next;
		free(present->str);
		free(present);
		present = nt;
	}
}
