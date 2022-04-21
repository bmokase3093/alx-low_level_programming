#include "lists.h"
/**
 * _strlen - find the length of the string
 * @str: string
 *
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int i;
	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node - adds a new node at the beginning of the list_t list.
 * @head: pointer to the first element of the list
 * @str: string to be duplicated
 *
 * Return: address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	/* temp now points to the first element*/
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = _strlen(str);

	*head = temp;

	return (*head);
}
