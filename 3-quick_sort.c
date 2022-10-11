#include "sort.h"


/**
 * quicksort - Implementation fo selection sorting
 *@first: index of the first num
 *@last: index of the last number
 *Author: Thaoban Abdrasheed Ola
 *
 *Return: nothing to return
 */
void quicksort(int *array, int first, int last)
{
   int i, j, pivot, temp, reserve;

   reserve = last + 1;
   if (first < last)
   {
      pivot = last;
      i = first;
      j = last;
      while (i < j)
      {
         while (array[i] <= array[pivot] && i < last)
            i++;
         while (array[j] > array[pivot])
            j--;
         if (i < j)
         {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            print_array(array, reserve);
         }
      }
      temp = array[pivot];
      array[pivot] = array[j];
      array[j] = temp;
      quicksort(array, first, j - 1);
      quicksort(array, j + 1, last);
   }
}

/**
 * quick_sort - Implementation of quick-sorting algo
 *@array: pointer to the array of integers
 *@size: size of the array
 *Author: Thaoban Abdrasheed
 *
 *Return: nothing to return
 */

void quick_sort(int *array, size_t size)
{
   quicksort(array, 0, size - 1);
}

