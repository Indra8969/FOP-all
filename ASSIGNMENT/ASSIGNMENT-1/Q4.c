//Q4. WAP to check whether the entered num is even or odd
#include <stdio.h>

int main(){
	int input;
	printf("Enter the Number : ");
	scanf("%d", &input);
	if(input % 2){
		printf("%d is a odd number ", input);
	}else{
		printf("%d is a even number ", input);
	}
	return 0;
}
