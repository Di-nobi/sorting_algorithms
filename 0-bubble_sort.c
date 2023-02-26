#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Bubble sort - a program that sorts inrtegers in ascending
 * order
 * @array: array of numbers
 * @size: size of numbers
 * Return: No Return
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	if (size < 2)
	{
		return;
	}

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - 2; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}
