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
	int pivot = arr[high]; // pivot
	int j, temp, i = (low - 1); // Index of smaller element

	for (j = low; j <= high- 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			i++; // increment index of smaller element
            //swap
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            //printArray(arr, high + 1);
        }
	}
    //swap
        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        printArray(arr, high + 1);
	return (i + 1);
}




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
