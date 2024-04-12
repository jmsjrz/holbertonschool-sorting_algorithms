#include "sort.h"

/**
* bubble_sort - Sorts an array of integers in ascending order
* using the bubble sort algorithm
* @array: The array to be sorted
* @size: The size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t index_a, index_b;
	int temp;

	if (!array || size < 2)
		return;

	for (index_a = 0; index_a < size - 1; index_a++)
	{
		for (index_b = 0; index_b < (size - index_a - 1); index_b++)
		{
			if (array[index_b] > array[index_b + 1])
			{
				temp = array[index_b + 1];
				array[index_b + 1] = array[index_b];
				array[index_b] = temp;

				print_array(array, size);
			}
		}
	}
}
