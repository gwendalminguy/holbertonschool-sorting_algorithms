#include "sort.h"

void quick_sort_recursive(int *array, size_t size, int *start, size_t total);

/**
 * quick_sort - sorts an array in ascending order
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t i = 0;
	int identical = 1;
	int total = size;
	int *start = &array[0];

	if (size > 1)
	{
		/* Checking if array has at least two different values */
		while (i < size)
		{
			if (array[0] != array[i])
			{
				identical = 0;
				break;
			}

			i++;
		}

		if (identical == 0)
			quick_sort_recursive(&array[0], size, start, total);
	}
}

/**
 * quick_sort_recursive - sorts an array in ascending order
 * @array: array to sort
 * @size: number of element to sort in array
 * @start: beginning of the whole array
 * @total: total size of the array
 */
void quick_sort_recursive(int *array, size_t size, int *start, size_t total)
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

				if (i != j)
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;

					print_array(&start[0], total);
				}
			}

			j++;
		}

		i++;

		/* Placing pivot at its final place */
		if (i != pivot)
		{
			temp = array[pivot];
			array[pivot] = array[i];
			array[i] = temp;

			print_array(&start[0], total);
		}

		/* Calling function recursively on left and right sections */
		quick_sort_recursive(&array[0], i, &start[0], total);
		quick_sort_recursive(&array[i + 1], size - (i + 1), &start[0], total);
	}
}
