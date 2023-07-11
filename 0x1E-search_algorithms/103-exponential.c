#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the array to search.
 * @right: The ending index of the array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the subarray being searched.
 */
int binary_search_(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);

int binary_search_(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		size_t i;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (int) mid;
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1;
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                      of integers using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints the value being compared and the subarray being searched.
 *              Uses powers of 2 as exponential ranges to search in the array.
 *              Calls the binary_search function to perform a binary search
 *              within the identified range.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL || size == 0)
		return -1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return binary_search_(array, low, high, value);
}

