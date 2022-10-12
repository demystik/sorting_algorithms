/* C implementation QuickSort using Lomuto's partition
Scheme.*/
#include <stdio.h>

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
	array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
void printArray(int arr[], int size);
void printarray(int arr[], int size);

int partition(int *arr, int low, int high)
{

 




// Driver program to test above functions
int main()
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);
	printf("unsorted array: \n");
    printArray(array, n);
	quickSort(array, 0, n-1);
	printf("Sorted array: \n");
	printArray(array, n);
	return 0;
}
