#include "sort.h"
#include <stdio.h>
/**
 * _swap ..
 * @array: ...
 * @i: ...
 * @j: ...
 * Return: ...
 */
 void _swap(int *array, int i, int j)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}
/**
 * shell_sort - ...
 * @array: ...
 * @size: ...
 * Return: ...
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 0, i, j;

	if (size < 2)
		return;

	while (h >= 1)
	{
		for (i = h; i < size; i++)
			for (j = i; j >= h && array[j - h]; j -= h)
				_swap(array, j, j - h);
		h /= 3;
		print_array(array, size);
	}
}
