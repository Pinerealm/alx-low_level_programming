#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, left, right, jump;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	left = 0;
	right = jump;

	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] <= value && array[right] >= value)
			break;
		if (right >= size)
			break;
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	if (right >= size)
		right = size - 1;
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
