#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary.
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
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left > right)
		return -1;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (int) mid;
		else
			return advanced_binary_recursive(array, left, mid, value);
	}
	else if (array[mid] < value)
		return advanced_binary_recursive(array, mid + 1, right, value);
	else
		return advanced_binary_recursive(array, left, mid - 1, value);
}

/**
 * advanced_binary - Searches for the first occurrence of a value
 *                   in a sorted array of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the subarray being searched using recursion.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	return advanced_binary_recursive(array, 0, size - 1, value);
}

