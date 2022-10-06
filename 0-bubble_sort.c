#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int temp;
    size_t i, j;

    for (i = 0; i != size; i++)
    {
        for(j = 1; j != size; j++)
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