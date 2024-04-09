#include "search_algos.h"

/**
 * linear_skip - a function that searches for a value in
 *  a sorted skip list of integers.
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: a pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *k;

	k = list;
	if (list == NULL)
		return (NULL);

	do {
		list = k;
		k = k->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)k->index, k->n);
	} while (k->express && k->n < value);

	if (k->express == NULL)
	{
		list = k;
		while (k->next)
			k = k->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)k->index);

	while (list != k->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
