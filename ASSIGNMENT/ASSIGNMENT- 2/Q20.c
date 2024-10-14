//Q20. write a function that takes two numbers and operatoe as arguments and perform arithmetic operatoin and returns the result.
#include <stdio.h>

float operate(float a, float b, char operater){
	float result;
	switch(operater){
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		default: 
			printf("\nNot a valid input");
	}
}

int main(){
	float num1, num2, result;
	char operater;
	printf("Enter the first number : ");
	scanf(" %f", &num1);
	printf("Enter the second number : ");
	scanf(" %f", &num2);
	printf("Enter the operater : ");
	scanf(" %c", &operater);
	result = operate(num1, num2, operater);
	printf("\n%.2f %c %.2f = %.2f", num1, operater, num2, result);
}
