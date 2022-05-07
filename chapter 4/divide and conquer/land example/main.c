#include <stdio.h>
#include <stdlib.h>

int Divide_land(int, int);
int main(void){
	
	int length, width;
	printf("Enter the Length and the width : ");
	
	scanf("%d %d", &length, &width);
	
	printf("the square land length = %d", Divide_land(length, width));
	return 0;
}

int Divide_land(int len, int wid){
	if(len == wid * 2)
		return wid;
	
	if(len > wid)
		(void)Divide_land(len - wid, wid);
	else if(len < wid){
		(void)Divide_land(wid, len);
	}
}