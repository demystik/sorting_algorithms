#include<stdio.h>

void print_array(const int *array, size_t size);


int partition(int *array, int low, int high)
{
   int pivot = array[high];
   int i = (low - 1);
   int j, temp, get;

   for (j = low; j < high - 2; j++)
   {
      if (array[j] < pivot || array[j] == pivot)
      {
         i++;
         temp = array[j];
         array[j] = array[i];
         array[i] = temp;
      }
   }
   get = array[i + 1];
   array[i + 1] = array[j];
   array[j] = get;
   return (i + 1);
}
void quicksort(int *array, int low, int high)
{
   if (low < high)
   {
      int pi = partition(array, low, high);

      quicksort(array, low, pi - 1);
      quicksort(array, pi + 1, high);
   }
}
void quick_sort(int *array, size_t size)
{
  
   quicksort(array, 0, size - 1);
}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}

void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}