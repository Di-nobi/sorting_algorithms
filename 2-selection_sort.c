#include "sort.h"
/**
 * selection_sort - a function that sorts an array of integers in
 * ascending order
 * @array: Array of elements
 * @size: Size of the elements
 * Return: Nothing
 */
void swap(int a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void selection_sort(int *array, size_t size)
{
	size_t start, mid, mini;
	

	for (start = 0; start < size - 1; start++)
	{
		mini = start;
		for (mid = start + 1; mid < size; mid++)
		{
			if (array[mid] < array[mini])
			{
				mini = mid;
			}
		}
		if (mini != start)
		{
			swap(array[start], array[mini]);
			print_array(array, size);
		}
	}
}
