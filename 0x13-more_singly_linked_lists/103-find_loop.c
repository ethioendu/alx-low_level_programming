#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *link;

	loop = link = head;
	while (loop && link && link->next)
	{
		loop = loop->next;
		link = link->next->next;
		if (loop == link)
		{
			loop = head;
			break;
		}
	}
	if (!loop || !link || !link->next)
		return (NULL);
	while (loop != link)
	{
		loop = loop->next;
		link = link->next;
	}
	return (link);
}
