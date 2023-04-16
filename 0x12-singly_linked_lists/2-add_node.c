#include "lists.h"
/**
 * _strlen - this function return the length of a string
 * @s:string
 * Return: length of string
 */
int _strlen(const char *s)
{
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head:pointer
 * @str:pointer
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
