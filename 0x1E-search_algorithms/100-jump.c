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
    if (array == NULL || size == 0)
        return -1;

    size_t step = sqrt(size);
    size_t prev = 0;

    size_t jump = step;
    while (jump < size && array[jump] < value) {
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
        prev = jump;
        jump += step;
    }

    size_t i;
    for (i = prev; i < jump && i < size; ++i) {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (int)i;
    }

    return -1;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int index = jump_search(arr, size, target);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
