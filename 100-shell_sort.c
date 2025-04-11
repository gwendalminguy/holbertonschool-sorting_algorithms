#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - sorts an array in ascending order
 *		using shell sorting algorithm
 * @array: array to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	int temp, swap, i;

	/* Finding first gap to use from Knuth sequence */
	while (gap * 3 + 1 < size)
	{
		gap = gap * 3 + 1;
	}

	/* Repeating with each gap from largest to 1 */
	while (gap >= 1)
	{
		swap = 1;

		/* Repeating until no values are swapped */
		while (swap == 1)
		{
			swap = 0;
			i = size - gap - 1;

			/* Repeating on each value of array */
			while (i >= 0)
			{
				/* Swapping values if unordered */
				if (array[i] > array[i + gap])
				{
					swap = 1;
					temp = array[i + gap];
					array[i + gap] = array[i];
					array[i] = temp;
				}

				i--;
			}
		}

		/* Updating gap value */
		gap = (gap - 1) / 3;

		/* Printing the array */
		print_array(array, size);
	}
}
