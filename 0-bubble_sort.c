#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 * Description: sort array using the Bubble sort algorithm
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n, swapped;
	int temp;

	if (array == NULL || size < 2)
		return;

	n = size;
	while (n > 0)
	{
		swapped = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = i + 1;
				print_array(array, size);
			}
		}
		n = swapped;
	}
}
