#include "sort.h"

/**
 * bubble_sort - This function sort an array of integers
 * using bubble method
 *@array: array of unsorted integers
 *@size: size of the array
 *Author: Thaoban Abdrasheed
 *
 * Return: nothing to return
 */

void bubble_sort(int *array, size_t size)
{
int temp;
size_t i, j;

for (i = 0; i != size; ++)
{
for (j = 1; j != size; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
