#include "lists.h"
/**
  * print_listint - prints all elements of a listint_t list.
  * @h: pointer to first element in a list.
  *
  * Return:  number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->h);
		count++;
		temp = temp->next;
	}

	return (count);
}
