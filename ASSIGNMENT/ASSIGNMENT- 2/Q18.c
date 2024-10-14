//Q18. write a recursive function to find a factorial of the number.
#include <stdio.h>

int fact(int num){
	if(num == 2) return num;
	return num * fact(num-1);
}

int main(){
	int number, factorial;
	printf("Enter the number you want to find the factorail : ");
	scanf(" %d", &number);
	factorial = fact(number);
	printf("Factorial of the %d is %d", number, factorial);
}
