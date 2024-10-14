//WAP to swap the vars 

#include <stdio.h>

int main(){
	int first = 4234, second = 6456, temp;
	printf("In initial state : first = %d and second = %d", first, second);
	temp = first;
	first = second; 
	second = temp;
	printf("\n\nAfter swap state : first = %d and second = %d", first, second);
}
