
#include <stdio.h>
void swap(int* t1, int* t2)
{
	int temp = *t1;
	*t1 = *t2;
	*t2 = temp;
}

void Sorting(int arr[], int n)    // sorting 
{
	int i, j;
	for (i = 0; i < n - 1; i++)


		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}



int iterativeBinarySearch(int array[], int start_index, int end_index, int element, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1]) {
			Sorting(array, size);

		}
		else
			while (start_index <= end_index) {

				int middle = start_index + (end_index - start_index) / 2;

				if (array[middle] == element)

					return middle;

				if (array[middle] < element)

					start_index = middle + 1;

				else
					end_index = middle - 1;
			}
	}
	return -1;
}




int main()
{
	int arr[] = { 65, 3, 4, 10, 40, 50 }; // 3 4 10 40 50 65
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 100;
	int result = iterativeBinarySearch(arr, 0, n - 1, x,n);
	(result == -1) ? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
