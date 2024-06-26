#include "search_algos.h"

/**
 * interpolation_search - Search for a vlue in a sorted array
 *			of integers using interpolation search
 * @array: A pointer to the first element of the array to search
 * @value: Value to be searched for
 * @size: The number of elements in the array
 * Return: If the element is not present or the array is NULL, -1
 *		Else, the first index where the value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, j, k;

	if (array == NULL)
		return (-1);

	for (j = 0, k = size - 1; k >= j;)
	{
		i = j + (((double)(k - j) / (array[k] - array[j])) * (value - array[j]));

		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			k = i - j;

		else
			j = i + 1;
	}
	return (-1);
}
