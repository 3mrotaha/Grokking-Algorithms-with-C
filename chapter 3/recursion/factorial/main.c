#include <stdio.h>

unsigned long long int factorial(unsigned int);
int main(void){

	printf("%llu", factorial(20));
	return 0;
}

unsigned long long int factorial(unsigned int num){

	if(num == 1){
		return 1;
	}
	
	return num * factorial(num - 1);
}