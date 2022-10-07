#include "sort.h"

void quicksort(int *array,int first,int last){
   int i, j, pivot, temp, reserve;

   reserve = last + 1;
   if(first < last)
   {
      print_array(array, reserve);
      pivot=first;
      i=first;
      j=last;
      while(i < j)
      {
         while(array[i] <= array[pivot] && i < last)
            i++;
         while(array[j]>array[pivot])
            j--;
         if(i<j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
      }
      temp=array[pivot];
      array[pivot]=array[j];
      array[j]=temp;
      quicksort(array,first,j-1);
      quicksort(array,j+1,last);
   }
}
void quick_sort(int *array, size_t size)
{
  
    quicksort(array, 0, size - 1);
}