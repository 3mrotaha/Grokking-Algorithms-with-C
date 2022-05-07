#include <stdio.h>
#include <stdlib.h>

int Binary_Search(int*, int, int, int);
int main(void){
	int n; // array size
	printf("Enter the array size : ");
	scanf("%d", &n);
	
	int *arr = (int*)calloc(n, sizeof(*arr));
	printf("Enter Elements : ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	printf("Index of number = %d", Binary_Search(arr, 0, n - 1, 5));
	free(arr);
	return 0;
}

int Binary_Search(int* arr, int start, int end, int number){
	int mid = (start + end) / 2;
	
	//base case
	if(arr[mid] == number)
		return mid;
	else if(start > end){
		return -1;
	}
	
	// recursive case
	if(arr[mid] > number){
		end = mid - 1;
	}
	else if(arr[mid] < number){
		start = mid + 1;
	}
	(void)Binary_Search(arr, start, end, number);
	
}

