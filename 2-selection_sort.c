#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 * Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t index, j, min_index;
	int temp;

	for (index = 0; index < size - 1; index++)
	{
		min_index = index;

		for (j = index + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		if (min_index != index)
		{
			temp = array[min_index];
			array[min_index] = array[index];
			array[index] = temp;

			print_array(array, size);
		}
	}
}
