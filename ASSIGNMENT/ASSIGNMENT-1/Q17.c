//Q17. Write a program to find a factorial of the entered number.

#include <stdio.h>

int factorial(n){
	if(n == 1) return 1;
	return n * factorial(n-1);
}

int main(){
	int input;
	printf("Enter the number you want to get the factorial : ");
	scanf("%d", &input);
	if(input > 16){
		printf("factorial of the given num is too long : please try 1 to 16 numbers inclusive");
		return 1;
	}
	printf("factorial of the %d is : %d",input, factorial(input));
	return 0;
}
