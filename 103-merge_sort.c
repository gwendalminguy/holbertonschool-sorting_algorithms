#include "sort.h"

void merge_sort_recursive(int *array, size_t size);

/**
 * merge_sort - sorts an array in ascending order
 *		using merge sorting algorithm
 * @array: array to sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	size_t i = 0;
	int identical = 1;

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

		/* Sorting array with recursion */
		if (identical == 0)
			merge_sort_recursive(array, size);
	}
}

/**
 * merge_sort_recursive - sorts an array in ascending order
 *			  using merge sorting algorithm
 * @array: array to sort
 * @size: size of array
 */
void merge_sort_recursive(int *array, size_t size)
{
	int *newArray;
	size_t leftSize = 0;
	size_t rightSize = 0;
	size_t i = 0, j = 0, n = 0;

	if (size > 1)
	{
		/* Computing left and right sizes */
		leftSize = size / 2;
		rightSize = size - leftSize;

		/* Allocating memory for left and right sections */
		newArray = malloc(size * sizeof(int));

		/* Filling left and right sections */
		while (i < leftSize)
		{
			newArray[n] = array[n];
			i++;
			n++;
		}
		while (j < rightSize)
		{
			newArray[n] = array[n];
			j++;
			n++;
		}

		/* Calling function recursively on left and right sections */
		merge_sort_recursive(&newArray[0], leftSize);
		merge_sort_recursive(&newArray[leftSize], rightSize);

		i = 0;
		j = 0;
		n = 0;

		/* Merging left and right sections */
		while (n < size)
		{
			if (i < leftSize && j < rightSize)
			{
				if (newArray[i] < newArray[leftSize + j])
				{
					array[n] = newArray[i];
					i++;
				}
				else
				{
					array[n] = newArray[leftSize + j];
					j++;
				}
			}
			else if (i < leftSize)
			{
				array[n] = newArray[i];
				i++;
			}
			else if (j < rightSize)
			{
				array[n] = newArray[leftSize + j];
				j++;
			}

			n++;
		}

		/* Printing the sorted array */
		printf("Merging...\n");
		printf("[left]: ");
		print_array(&newArray[0], leftSize);
		printf("[right]: ");
		print_array(&newArray[leftSize], rightSize);
		printf("[Done]: ");
		print_array(array, size);

		/* Freeing memory */
		free(newArray);
	}
}
