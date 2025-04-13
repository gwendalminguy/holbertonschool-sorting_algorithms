#include "sort.h"

/**
 * counting_sort - sorts an array in ascending order
 *		   using counting sorting algorithm
 * @array: array to sort
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	size_t i = 0, max = 0;
	int *countingArray;
	int *tempArray;

	if (size > 1)
	{
		/* Finding largest value in array */
		while (i < size)
		{
			if (array[i] > (int)max)
				max = array[i];
			i++;
		}

		/* Allocating memory */
		countingArray = malloc((max + 1) * sizeof(int));
		tempArray = malloc(size * sizeof(int));

		/* Sorting array */
		if (countingArray != NULL && tempArray != NULL)
		{
			/* Counting number of unique elements in array and copying array */
			for (i = 0 ; i < size ; i++)
			{
				countingArray[array[i]] += 1;
				tempArray[i] = array[i];
			}

			/* Adding count of previous element for each value in countingArray */
			for (i = 1 ; i < max + 1 ; i++)
				countingArray[i] += countingArray[i - 1];

			print_array(countingArray, max + 1);

			/* Replacing values in array */
			for (i = 0 ; i < size ; i++)
			{
				array[countingArray[tempArray[i]] - 1] = tempArray[i];
				countingArray[tempArray[i]] -= 1;
			}
		}

		/* Freeing memory */
		free(countingArray);
		free(tempArray);
	}
}
