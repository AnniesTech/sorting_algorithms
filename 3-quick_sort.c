#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1); /*sorts entire array*/

}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;

}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void quicksort_recursion(int *array, size_t start, size_t end)
{
	size_t pivot_index = partition(array, start, end);
	
	/*stops the recursion process*/
	if (start < end)
	{
		/*left portion of the array*/
		quicksort_recursion(array, start, pivot_index - 1);

 
		/*right portion of array*/
		quicksort_recursion(array, pivot_index + 1, end);

	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

size_t partition(int *array, size_t start, size_t end)
{
	/*pivot will always be the last position of the portion array*/
	int pivot_value = array[end];
	size_t i = start;
	size_t j;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(array[i], array[j]);
			i++;
		}
	}

	/*to set the pivot value at index i*/
	swap(array[i], array[end]);


	/*the pivot is in i*/
	return (i);
}
