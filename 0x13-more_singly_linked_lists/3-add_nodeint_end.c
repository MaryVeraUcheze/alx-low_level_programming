#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head pointer
 * @n: integer to print
 * Return: address of new elementvor NULL Iif fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *backblock, *temp;

	backblock = malloc(sizeof(listint_t));

	if (backblock == NULL)
	return (NULL);

	backblock->n = n;
	backblock->next = NULL;

	if (*head == NULL)
	*head = backblock;
	
	else
	{

	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;

	temp->next = backblock;
	}
	return (*head);
}
