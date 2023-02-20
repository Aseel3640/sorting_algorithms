#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - sort array in asscending order
 * @array: array to sort
 * @size:: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, sorted;

	if (!array || size == 0)
		return;
	do {
		sortes = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[b];
				array[b] = array[b + 1];
				array[b + 1] = swap;
				print_array(array, size);
			}
		}
	} while (sorted == 0);
}
