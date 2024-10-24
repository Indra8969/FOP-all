//Q4. Write a function using pointers to exchange the value stored in two locations in the memory.
#include <stdio.h>

void swap(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void main(){
	int first = 234, second = 4564; 
	printf("Before swapping\nFirst  : %5d \nSecond : %5d", first, second);
	swap(&first, &second);
	printf("\n\nAfter swapping\nFirst  : %5d \nSecond : %5d", first, second);
}

