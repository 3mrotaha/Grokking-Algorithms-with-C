#include <stdio.h>
#include <stdlib.h>

void qsort_algo(int*, int);

int main(void){
	
	int n;
	printf("Enter the array size : ");
	scanf("%d", &n);
	
	int* arr = (int*)calloc(n, sizeof(*arr));
	printf("Enter the Elements : ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	qsort_algo(arr, n);
	printf("Array Sorted : ");
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
		
	free(arr);
	return 0;
}

void qsort_algo(int* arr, int arr_size){
	// declare the array of less, greater elements and the pivot
	// we can choose any index as the pivot (start, middle, end or 
	// anywhere inbetween the array size).
	int less[arr_size], greater[arr_size], pivot = arr_size / 2; // 1; // 0; // arr_size - 1;
	
	if(arr_size < 2){
		return;
	}
	else{
		// partitioning the array into 2 sub_arrays
		int l_index = 0, g_index = 0;
		for(int i = 0; i < arr_size; i++){
			// store the less elements in a sub array (less)
			if(arr[i] <= arr[pivot] && i != pivot){
				less[l_index] = arr[i];
				l_index++;
			}// store the greater elements in a sub-array (greater)
			else if(arr[i] >= arr[pivot] && i != pivot){
				greater[g_index] = arr[i];
				g_index++;
			}
		}

		qsort_algo(less, l_index); // Quick sort the sub-array of less elements
		qsort_algo(greater, g_index); // Quick sort the sub-array of greater elements
		
		//Collecting the array again
		arr[l_index] = arr[pivot]; 
		for(int i = 0, j = 0; i < arr_size; i++){
			if(i < l_index)
				arr[i] = less[i];
			else if(i > l_index){
				arr[i] = greater[j];
				j++;
			}
		}
	
	}
}