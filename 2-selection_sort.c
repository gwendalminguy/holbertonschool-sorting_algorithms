#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order using
 * the Selection sort algorithm.
 * @array: Array of int to be sorted.
 * @size: size of array to be sorted.
 *
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t min = 0;
	size_t i, j;
	int temp = 0;

	if (size >= 2)
	{
		/*
		 * Loops through array setting minimum value to be first element
		 * by default
		 */
		for (i = 0; i < size - 1; i++)
		{
			min = i;

			/*find the inex of the smallest element in the array*/
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
					min = j;
			}
			/*
			 * If element at index i is not already the smallest
			 * swaps it
			 */
			if (minPos != i)
			{
				temp = array[i];
				array[i] = array[min];
				array[min] = temp;

				print_array(array, size);
			}
		}
	}
}
