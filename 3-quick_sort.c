#include "sort.h"

/**
 * quick_sort - sorts an array in ascending order
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int pivot = size - 1;
	int i = -1, j = 0;
	int temp;

	if (size > 1)
	{
		/* Repeating for each value until pivot is reached */
		while (j <= pivot)
		{
			/* Swapping i and j in array if j is lower than pivot */
			if (array[j] < array[pivot])
			{
				i++;

				temp = array[j];
				array[j] = array[i];
				array[i] = temp;

				print_array(&array[0], size);
			}

			j++;
		}

		i++;

		/* Placing pivot at its final place */
		temp = array[pivot];
		array[pivot] = array[i];
		array[i] = temp;

		print_array(&array[0], size);

		/* Calling function recursively on left and right sections */
		quick_sort(&array[0], i);
		quick_sort(&array[i + 1], size - (i + 1));
	}
}
