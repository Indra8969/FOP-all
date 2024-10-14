//Q2. WAP to add, miltuply and divide two intergers and float nums.
#include <stdio.h>

int main(){
	float f,s;
	int task;
	printf("Enter first value : ");
	scanf("%f", &f);
	printf("Enter first value : ");
	scanf("%f", &s);
	
	printf("\nwhat you want to do\n1.Addition\n2.Multiplication\n3.Division\n");
	printf("\ninput : ");
	scanf("%d", &task);
	
	switch(task){
		case 1:
			printf("\nYou sum of the nums is : %f", f + s);
			break;
		case 2:
			printf("\nYou Multiplication of the nums is : %f", f * s);
			break;
		case 3:
			printf("\nYou Division of the nums is : %f", f/s);
			break;
		default:
			printf("\nunvalid input");
			break;
	}
	
}
