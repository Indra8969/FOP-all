//Q.16. Write a program to print the multiplication table of given number.

#include <stdio.h>

int main(){
	int input, i;
	printf("Enter the number you wanna print a multiplication table : ");
	scanf("%d", &input);
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d\n", input, i, input * i);
	}
	return 0;
}
