#include <stdio.h>
#include <stdlib.h>
#define SIZE(x)	((int) (sizeof(x)/sizeof(x[0])))

int Sum_Array(int*, int);
int main(void){
	int n; // array size
	printf("Enter the array size : ");
	scanf("%d", &n);
	
	int *arr = (int*)calloc(n, sizeof(*arr));
	printf("Enter Elements : ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	printf("Sum of Array = %d", Sum_Array(arr, n));
	free(arr);
	return 0;
}

int Sum_Array(int* arr, int arr_size){
	if(arr_size == 1)
		return arr[0];
	
	return arr[0] + Sum_Array(&arr[1], arr_size - 1);
}