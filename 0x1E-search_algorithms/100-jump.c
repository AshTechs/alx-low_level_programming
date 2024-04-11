#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *		using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value in the array, or -1 if not found.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0;
	size_t right = jump;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (size_t i = left; i <= right && i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (int i);
	}
	return (-1);
}
