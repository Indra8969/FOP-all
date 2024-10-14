//Q6. WAP to accept nums of days and prnt year, mnth and remaining days
//constarins : year has 365 days and month has 30 days

//inshort this question is about converting a day into the year month and day format 

#include <stdio.h>

int main(){
	int input, years, months, days;
	printf("Enter the days : ");
	scanf("%d", &input);
	
	years = input / 365;
	months = (input % 365) / 30;
	days = 	((input % 365))% 30;
	
	printf("\n%d Years, %d Months and %d days remaining", years, months, days);
	
	return 0;
}
