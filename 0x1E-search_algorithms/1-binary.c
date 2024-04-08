#include "search_algos.h"

/**
 * binary_search - funct that searches for a value in a sorted array iterative
 * of integers using the Binary search algorithm
 * @array: Type pointer of given array
 * @size: Type size of elements in the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */
int binary_search(int *array, size_t size, int value)
{
	int h, left, right;

	if (!array)
		return (-1);
	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (h = left; h < right; h++)
			printf("%d, ", array[h]);
		printf("%d\n", array[h]);

		h = left + (right - left) / 2;
		if (array[h] == value)
			return (h);
		if (array[h] > value)
			right = h - 1;
		else
			left = h + 1;
	}
	return (-1);
}
