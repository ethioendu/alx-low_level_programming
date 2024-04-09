#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of
 *     ntegers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t j, mid;

	mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (j = 0; j < size; j++)
		printf("%s %d", (j == 0) ? ":" : ",", array[j]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (rec_search(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (rec_search(array, mid + 1, value));

	mid++;
	return (rec_search(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: If value is not present in array or if array is NULL, -1.
 *  Otherwise ,index of the number.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = rec_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
