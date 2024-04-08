#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * in an array of integers.
 * @array: Type pointer of given array
 * @size: Type size of elements in the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */

int linear_search(int *array, size_t size, int value)
{
	int h;

	if (array == NULL)
		return (-1);
	for (h = 0; h < (int)size; h++)
	{
		printf("Value checked array[%d] = [%d]\n", h, array[h]);
		if (array[h] == value)
			return (h);
	}
	return (-1);
}
