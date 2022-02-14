#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort- sorts an array of integers
 * in ascending order using selection sort algorithm
 * @array: an array of integers
 * @size: size of the array of integers
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int j;

	while (i < size - 1)
	{
		j = location_smallest(array, i, size - 1);
		swap(array, i, j, size);
		i++;
	}

}


/**
 * swap- swaps two positions of an array of integers
 * @array: an array of integers
 * @x: index of position of array to swap
 * @y: index of position of array to swap
 * @size: the size of the array of integers
 * Return: Nothing.
 */

void swap(int *array, int x, int y, size_t size)
{
int tmp;

tmp = array[x];
array[x] = array[y];
array[y] = tmp;
print_array(array, size);
}

/**
 * location_smallest- locates the smallest number in an
 * array of integers
 * @array: an array of integers
 * @s: staring point to look for the smallest remaing int
 * @e: ending point
 * Return: an integer that represents the index where
 * the smallest integer is located
 */

int location_smallest(int *array, int s, int e)
{
	int i = s;
	int j = i;

	while (i <= e)
	{
		if (array[i] < array[j])
		{
			j = i;
		}
		i++;
	}
	return (j);
}
