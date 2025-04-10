#include "sort.h"

/**
 * quick_sort - sorts an array in ascending order
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot = size;
	size_t i;
	int temp;

	/* Repeating using each value as pivot from last to first */
	while (pivot > 0)
	{
		i = 0;
		pivot--;
 
		/* Repeating for each value unsorted */
		while (i < pivot)
		{
			/* Swapping values if unordered */
			if (array[i] > array[pivot])
			{
				temp = array[i];
				array[i] = array[pivot];
				array[pivot] = temp;

				print_array(array, size);
			}

			i++;

		}
	}
}
