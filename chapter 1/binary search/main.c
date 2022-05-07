#include <stdio.h>

#define SIZE(x)		((int)(sizeof(x)/sizeof(x[0])))
int Binary_search(int* a, int size, int Number);
int main(void){
	
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 43, 54}, index;
	index = Binary_search(a, SIZE(a), 100);
	printf("%d", index);
	return 0;
}

int Binary_search(int* a, int size, int Number){
	int start = 0, end = size - 1, mid = (start + end)/2;
	while(start <= end){
		if(a[mid] == Number){
			return mid;
		}
		else if(a[mid] > Number){
			end = mid - 1;
		}
		else if(a[mid] < Number){
			start = mid + 1;
		}
		mid = (start + end)/2;
	}
	return -1;
}