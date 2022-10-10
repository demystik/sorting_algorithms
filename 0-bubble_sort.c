#include "sort.h"

/**
 * bubble_sort - This function sort an array of integers
 * using bubble algo method
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

if (array == NULL || size < 2)
{
return;
}
for (i = 0; i != size; i++)
{
for (j = 0; j != size - 1; j++)
{
if (array[j] >= array[j + 1])
{
temp = array[j + 1];
array[j + 1] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
}
