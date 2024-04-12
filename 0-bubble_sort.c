#include "sort.h"

/**
* swap_ints - Swap two integers in an array
* @first: pointer to the first integer
* @second: pointer to the second integer
*/
void swap_ints(int *first, int *second)
{
	int temp = *first;

	*first = *second;
	*second = temp;
}

/**
* bubble_sort - Sorts an array of integers in ascending order
* using the bubble sort algorithm
* @array: The array to be sorted
* @size: The size of the array
*/
void bubble_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	for (size_t index = 0; index < size - 1; index++)
	{
		for (size_t comp_index = 0; comp_index < size - 1 - index; comp_index++)
		{
			if (array[comp_index] > array[comp_index + 1])
			{
				swap_ints(&array[comp_index], &array[comp_index + 1]);
				print_array(array, size);
			}
		}
	}
}
