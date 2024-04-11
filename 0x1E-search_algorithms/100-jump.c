#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *		using jump search
 * @array: A pointer of the first array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: If the value is not present or the array is NULL, -1
 *		Else, the first index where the value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		i = jump;
		jump += step;
	}
	printf("Value found between array[%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;

	for (; i  < jump && array[i] < value; i++)

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
