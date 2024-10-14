//Q18. Write a program to print all the numbers and sum of all the integers that are greater than 50 and less than 70 and are divisible by 7.
#include <stdio.h> 

int main(){
	// here i'm writing a program for not the hard coded vals i'm making it more dynamic that can be possible
	// here i'm asking the user to gimme a conditions for the less than and the greater than vals for instance do it for the 49 - 80 
	int greaterThan, lessThan, divisor, sum = 0, i;
	printf("Enter the number which is youw floor value : ");
	scanf("%d", &greaterThan);
	printf("Enter the number which is youw ceil value : ");
	scanf("%d", &lessThan);
	printf("Enter the divisor: ");
	scanf("%d", &divisor);
	
	for(i = greaterThan; i <= lessThan; i++){
		if(!(i % divisor)){
			sum += i;
		}
	}
	printf("condition : Number % %d == 0 && floor %d < Number < ceil %d , sum of those Nums : %d ",divisor, greaterThan, lessThan, sum);
	return 0;
}
