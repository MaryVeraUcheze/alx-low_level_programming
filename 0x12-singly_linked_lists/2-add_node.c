#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer
 * @str:string
 * Return: number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len_str;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
	free(new);
	return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len_str = 0; str[len_str] != '\0'; len_str++)
		;
	new->len = len_str;
	new->next = *head;
	*head = new;

	return (new);
}
