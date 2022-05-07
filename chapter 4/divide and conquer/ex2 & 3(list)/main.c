#include <stdio.h>
#include <stdlib.h>

int Max_Element_In_Array(int*, int);
int main(void){
	int n; // array size
	printf("Enter the array size : ");
	scanf("%d", &n);
	
	int *arr = (int*)calloc(n, sizeof(*arr));
	printf("Enter Elements : ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	printf("Max of Array = %d", Max_Element_In_Array(arr, n));
	free(arr);
	return 0;
}

int Max_Element_In_Array(int* arr, int arr_size){
	int max;
	if(arr_size == 1)
		return max = arr[0];
	
	max = Max_Element_In_Array(&arr[1], arr_size - 1);
	
	return ((arr[0] > max)? arr[0] : max);
}

// 6 4 -1 9 10 9 4   			a[0] = 6 < 	max = 10  --> return 10
//   4 -1 9 10 9 4   			a[0] = 4 < 	max = 10  --> return 10
//     -1 9 10 9 4			 	a[0] = -1 < max = 10  --> return 10
//        9 10 9 4   			a[0] = 9 < 	max = 10  --> return 10
//          10 9 4   			a[0] = 10 > max = 9  --> return 10
//             9 4   			a[0] = 9 > 	max = 4   --> return 9
//               4 (Base Case)  a[0] = max = 4		 --> return 4