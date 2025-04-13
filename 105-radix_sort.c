#include "sort.h"

void count_sort(int *array, size_t size, int power);

/**
 * radix_sort - sorts an array in ascending order
 *		using radix sorting algorithm
 * @array: array to sort
 * @size: size of array
 */
void radix_sort(int *array, size_t size)
{
	size_t i = 0, max = 0, digits = 0;
	int power = 1;

	if (size > 1)
	{
		/* Finding largest value in array */
		while (i < size)
		{
			if (array[i] > (int)max)
				max = array[i];
			i++;
		}

		/* Finding number of digits in max */
		while (max > 0)
		{
			digits++;
			max /= 10;
		}

		/* Sorting array from LSD to MSD */
		for (i = 0 ; i < digits ; i++)
		{
			count_sort(array, size, power);
			print_array(array, size);

			power *= 10;
		}
	}
}

/**
 * count_sort - sorts an array in ascending order
 *		using counting sorting algorithm
 * @array: array to sort
 * @size: size of array
 * @power: significant number to use for sorting
 */
void count_sort(int *array, size_t size, int power)
{
	size_t i = 0, max = 0;
	int *countingArray;
	int *numberArray;
	int *digitArray;

	/* Finding largest value in array */
	while (i < size)
	{
		if ((array[i] / power) % 10 > (int)max)
			max = (array[i] / power) % 10;
		i++;
	}

	/* Allocating memory */
	countingArray = calloc(max + 1, sizeof(int));
	numberArray = calloc(size, sizeof(int));
	digitArray = calloc(size, sizeof(int));

	/* Sorting array */
	if (countingArray != NULL && numberArray != NULL && digitArray != NULL)
	{
		/* Counting number of unique elements in array and copying array */
		for (i = 0 ; i < size ; i++)
		{
			digitArray[i] = (array[i] / power) % 10;
			countingArray[digitArray[i]] += 1;
			numberArray[i] = array[i];
		}

		/* Adding count of previous element for each value in countingArray */
		for (i = 1 ; i < max + 1 ; i++)
			countingArray[i] += countingArray[i - 1];

		/* Replacing values in array */
		for (i = size - 1 ; i + 1 >= 1 ; i--)
		{
			array[countingArray[digitArray[i]] - 1] = numberArray[i];
			countingArray[digitArray[i]] -= 1;
		}
	}

	/* Freeing memory */
	free(countingArray);
	free(numberArray);
	free(digitArray);
}
