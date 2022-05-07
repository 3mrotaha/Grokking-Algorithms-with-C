#include <stdio.h>

#define SIZE(x)		((int)(sizeof(x)/sizeof(x[0])))

void SelectionSort(int*, int);
void print(int*, int);
int main(void){
	
	int a[] = {9, 7, 5, 2, 10, 1, 0, 13, 0, 12};
	SelectionSort(a, SIZE(a));
	print(a, SIZE(a));
	return 0;
}

void print(int* a, int size){
	for(int i = 0; i < size; i++)
		printf("%d ", a[i]);
}

void SelectionSort(int* a, int size){
	int smallest_index;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(a[i] > a[j]){
				smallest_index = a[i];
				a[i] = a[j];
				a[j] = smallest_index;
			}
		}
	}
}