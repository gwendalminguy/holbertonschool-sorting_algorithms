#include "sort.h"
/**
 * selection_sort - sorts an array in ascending order
 *		    using selection sorting algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t min = 0;
	size_t i, j;
	int temp = 0;

	if (size >= 2)
	{
		 /* Looping through array setting minimum value to be first element */
		for (i = 0; i < size - 1; i++)
		{
			min = i;

			/* Finding the inex of the smallest element in the array */
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
					min = j;
			}

			 /* Swapping if element at index i is not already the smallest */
			if (min != i)
			{
				temp = array[i];
				array[i] = array[min];
				array[min] = temp;

				print_array(array, size);
			}
		}
	}
}
