#include "sort.h"


/**
 * all_sort- checking if array is all sorted
 *@array: pointer to the array of integers(unsort)
 *@size: size of the array
 *Author: Thaoban Abdrasheed
 *
 *Return: 0 if not and 1 if all sorted
 */

int all_sort(int *array, size_t size)
{
size_t i;
i = 1;
while (i != size)
{
if (array[i] < array[i - 1])
{
return (0);
}
i++;
}
return (1);
}




/**
 * selection_sort - Implementation of selection sorting
 *@array: pointer to the array of integers
 *@size: size of the array
 *Author: Thaoban Abdrasheed
 *
 *Return: nothing to return
 */
void selection_sort(int *array, size_t size)
{
size_t i, j;
int temp, l, carry, check;

if (array == NULL || size < 2)
{
return;
}
for (i = 0; i != size; i++)
{
check = 0;
temp = array[i];
for (j = i + 1; j != size; j++)
{
if (temp > array[j])
{
check = 1;
temp = array[j];
l = j;
}
}
if (all_sort(array, size) == 1)
{
break;
}
carry = array[i];
array[i] = temp;
array[l] = carry;
if (check == 0)
{
continue;
}
print_array(array, size);
}
}
