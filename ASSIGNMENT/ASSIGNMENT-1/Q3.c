//Q3. WAP ? !leapYear : leapYear;

#include<stdio.h>

int main(){
	int input;
	printf("\nEnter the Year : ");
	scanf("%d", &input);
	
	if(!(input % 4 )){
		if(input > 2024){
			printf("%d will be a leap year", input);	
		}else{
			printf("%d was a leap year", input);
		}
	}else{
		printf("%d isn't a leap year'", input);
	}
	
	return 0;
}
